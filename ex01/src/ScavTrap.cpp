
#include "../include/ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap: Default Constructor Called" << std::endl;
    this->name = "ScavTrap default";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "Scavtrap: Constructor Called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ScavTrap::ScavTrap(ScavTrap const &another){
    std::cout << "ScavTrap copy called" << std::endl;
    *this = another;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other){
    std::cout << "Assignation operator called" << std::endl;
    this->name = other.name;
    return(*this);
}

void ScavTrap::attack(const std::string& target){
    if (this->energyPoints == 0 || this->hitPoints == 0){
        std::cout << "ScavTrap dont have energy points or is dead." << std::endl;
    } else {
        std::cout << "ScavTrap " << this->name << " attacks " << target <<", causing " << this->attackDamage  << "points of damage!" << std::endl;
        this->energyPoints = this->energyPoints - 1;
    }
};
void ScavTrap::takeDamage(unsigned int amount){
    std::cout << "Take dmg: ScavTrap have life: " << this->hitPoints << std::endl;
    this->hitPoints = this->hitPoints - amount;
    if (this->hitPoints < 0) {
        this->hitPoints = 0;
    }
    std::cout << "Take dmg ScavTrap receive: " << amount << " damage." << ". Actual life points:" << this->hitPoints << std::endl;
};
void ScavTrap::beRepaired(unsigned int amount){
    if (this->energyPoints == 0 || this->hitPoints == 0){
        std::cout << "ScavTrap can\'t do nothing" << std::endl;
    } else {
        std::cout << "ScavTrap have life: " << this->hitPoints << std::endl;
        this->hitPoints = this->hitPoints + amount;
        this->hitPoints > 10 ? this->hitPoints = 10 : this->hitPoints;
        this->energyPoints = this->energyPoints - 1;
        std::cout << "ScavTrap " << this->name << " repairs: " << amount << ". Actual life points:" << this->hitPoints << std::endl;
    }
};

void ScavTrap::guardGate(){
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}
