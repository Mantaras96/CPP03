//
// Created by Albert Mantaras on 16/7/22.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap {

    ScavTrap(std::string name);
    ~ScavTrap(void);
    ScavTrap(ScavTrap const &another);
    ScavTrap &operator=(ScavTrap const &another);

    void guardGate();

private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
};


#endif