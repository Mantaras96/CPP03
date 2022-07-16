
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    public:
        ClapTrap(std::string name);

        ~ClapTrap(void);
        ClapTrap(ClapTrap const &another);
        ClapTrap &operator=(const ClapTrap &other);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        private:
            std::string name;
            int hitPoints;
            int energyPoints;
            int attackDamage;
};

#endif