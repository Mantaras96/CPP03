
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
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
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

void ScavTrap::guardGate(){
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}
