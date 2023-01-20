
#include "../include/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor Called" << std::endl;
    this->name = "Default";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor Called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &another){
    std::cout << "ClapTrap copy called" << std::endl;
    *this = another;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
    std::cout << "Assignation operator called" << std::endl;
    this->name = other.name;
    return(*this);
}


std::string ClapTrap::getName() const
{
    return this->name;
}

int ClapTrap::getEnergy() const
{
    return this->energyPoints;
}

int ClapTrap::getAttack() const
{
        return this->attackDamage;
}

int ClapTrap::getHealth() const
{
    return this->hitPoints;
}

void ClapTrap::attack(const std::string& target){
    if (this->energyPoints == 0 || this->hitPoints == 0){
        std::cout << "ClapTrap dont have energy points or is dead." << std::endl;
    } else {
        std::cout << "ClapTrap " << this->name << " attacks " << target <<", causing " << this->attackDamage  << "points of damage!" << std::endl;
        this->energyPoints = this->energyPoints - 1;
    }
};

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "Take dmg: ClapTrap have life: " << this->hitPoints << std::endl;
    this->hitPoints = this->hitPoints - amount;
    if (this->hitPoints < 0) {
        this->hitPoints = 0;
    }
    std::cout << "Take dmg ClapTrap receive: " << amount << " damage." << ". Actual life points:" << this->hitPoints << std::endl;
};

void ClapTrap::beRepaired(unsigned int amount){
    if (this->energyPoints == 0 || this->hitPoints == 0){
        std::cout << "ClapTrap can\'t do nothing" << std::endl;
    } else {
        std::cout << "ClapTrap have life: " << this->hitPoints << std::endl;
        this->hitPoints = this->hitPoints + amount;
        this->energyPoints = this->energyPoints - 1;
        std::cout << "ClapTrap " << this->name << " repairs: " << amount << ". Actual life points:" << this->hitPoints << std::endl;
    }
};
