
#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap 
{
    public:
        FragTrap(void);
        FragTrap(const std::string name);
        ~FragTrap(void);
        FragTrap(FragTrap const &another);
        FragTrap &operator=(const FragTrap &other);

        void highFivesGuys();
};

#endif