
#include "../include/DiamondTrap.hpp"

    DiamondTrap::DiamondTrap(const std::string name): FragTrap(std::string(name).append("_clap_name")), ScavTrap(std::string(name).append("_clap_name")), _name(name) {
        std::cout << "DiamondTrap constructor called" << std::endl;
        this->hitPoints = 100; // FragTrap 
        this->energyPoints = 50; // ScavTrap 
        this->attackDamage = 30; // FragTrap 
    }

    DiamondTrap::~DiamondTrap(){
        std::cout << "DiamondTrap destructor called" << std::endl;
    }

    DiamondTrap::DiamondTrap(DiamondTrap const &another): ScavTrap(another.name + "clap_name"), FragTrap(another.name + "clap_name"),  _name(another.name)
    {
        std::cout << "DiamondTrap copy called" << std::endl;
        *this = another ;
    }

    DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other){
        std::cout << "Assignation operator called" << std::endl;
        this->name = other.name;
        return(*this);
    }

    void ScavTrap::attack(const std::string& target){
        if (this->energyPoints == 0 || this->hitPoints == 0){
            std::cout << "DiamondTrap dont have energy points" << std::endl;
        } else {
            std::cout << "DiamondTrap " << this->name << " attacks " << target <<", causing " << this->attackDamage  << "points of damage!" << std::endl;
        }
    };


    void DiamondTrap::whoAmI(){
        std::cout << "I am claptrap:" << this->name << " normal name:" << this->_name << std::endl;
    }

