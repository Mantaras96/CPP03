
#ifndef DiamondTrap_HPP
#define DiamondTrap_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: virtual public FragTrap, virtual public ScavTrap  
{
    public:
        DiamondTrap(const std::string name);
        ~DiamondTrap(void);
        DiamondTrap(DiamondTrap const &another);
        DiamondTrap &operator=(const DiamondTrap &other);

        using ScavTrap::attack;
        void whoAmI();

        private:
            std::string _name;
};

#endif