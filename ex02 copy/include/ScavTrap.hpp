#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp";

class ScavTrap: public ClapTrap 
{
    public:
        ScavTrap(const std::string name);
        ~ScavTrap(void);
        ScavTrap(ScavTrap const &another);
        ScavTrap &operator=(const ScavTrap &other);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void guardGate();

        private:

            ScavTrap( void );
};

#endif