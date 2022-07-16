//
// Created by Albert Mantaras on 16/7/22.
//

#include "../include/ScavTrap.hpp"

    ScavTrap::ScavTrap(std::string name): name(name){
        this->hitPoints = 100;
        this->attackDamage = 20;
        this->energyPoints = 50;
    }

    ScavTrap::~ScavTrap(void){}

    ScavTrap::ScavTrap(ScavTrap const &another){
        *this = another
    }
    ScavTrap::ScavTrap &operator=(ScavTrap const &another){
        return (*this);
    }

    void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}