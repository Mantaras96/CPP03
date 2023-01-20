
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap 
{
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ~ScavTrap(void);
        ScavTrap(ScavTrap const &another);
        ScavTrap &operator=(const ScavTrap &other);
        void attack(const std::string& target);

        int getHealth() const;
        int getAttack() const;
        int getEnergy() const;
        std::string getName() const;
        void guardGate();
};

#endif