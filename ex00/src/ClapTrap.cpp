
#include "../include/ClapTrap.hpp"

    ClapTrap::ClapTrap(std::string name): name(name){
        std::cout << "ClapTrap constructor called" << std::endl;
        this->hitPoints = 10;
        this->energyPoints = 10;
        this->attackDamage = 0;
    }


#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor Called" << std::endl;
    this->name = "Teo";
    this->energy = 10;
    this->health = 10;
    this->attack_ = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor Called" << std::endl;
    this->name = name;
    this->energy = 10;
    this->health = 10;
    this->attack_ = 0;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = claptrap;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &claptrap)
{
    std::cout << "Assignation operator called" << std::endl;
    this->name = claptrap.getName();
    this->energy = claptrap.getEnergy();
    this->health = claptrap.getHealth();
    this->attack_ = claptrap.getAttack();
    return *this;
}


std::string ClapTrap::getName() const
{
    return this->name;
}

int ClapTrap::getEnergy() const
{
    return this->energy;
}

int ClapTrap::getAttack() const
{
        return this->attack_;

}

int ClapTrap::getHealth() const
{
    return this->health;
}

    ClapTrap::~ClapTrap(){
        std::cout << "ClapTrap destructor called" << std::endl;
    }

    ClapTrap::ClapTrap(ClapTrap const &another){
        std::cout << "ClapTrap copy called" << std::endl;
        *this = another;
    }

    ClapTrap &ClapTrap::operator=(const ClapTrap &other){
        std::cout << "Assignation operator called" << std::endl;
        this->name = other.name;
        return(*this);
    }

    void ClapTrap::attack(const std::string& target){
        if (this->energyPoints == 0 || this->hitPoints == 0){
            std::cout << "ClapTrap dont have energy points" << std::endl;
        } else {
            std::cout << "ClapTrap " << this->name << " attacks " << target <<", causing " << this->attackDamage  << "points of damage!" << std::endl;
        }
    };
    void ClapTrap::takeDamage(unsigned int amount){
        this->energyPoints = this->energyPoints - amount;
        if (this->energyPoints < 0) {
            this->energyPoints = 0;
        }
        std::cout << "ClapTrap receive " << amount << " damage." << ". Actual life points:" << this->energyPoints << std::endl;
    };
    void ClapTrap::beRepaired(unsigned int amount){
        if (this->energyPoints == 0 || this->hitPoints == 0){
            std::cout << "ClapTrap can\'t do nothing" << std::endl;
        } else {
            this->energyPoints = this->energyPoints + amount;
            this->energyPoints > 10 ? this->energyPoints = 10 : this->energyPoints;
            std::cout << "ClapTrap " << this->name << " repairs: " << amount << ". Actual life points:" << this->energyPoints << std::endl;
        }
    };

