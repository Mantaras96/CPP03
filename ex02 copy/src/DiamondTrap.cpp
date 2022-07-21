
#include "../include/DiamondTrap.hpp"

    DiamondTrap::DiamondTrap(const std::string name): ClapTrap(name) {
        std::cout << "DiamondTrap constructor called" << std::endl;
        this->hitPoints = 100;
        this->energyPoints = 100;
        this->attackDamage = 30;

    }

    DiamondTrap::~DiamondTrap(){
        std::cout << "DiamondTrap destructor called" << std::endl;
    }

    DiamondTrap::DiamondTrap(DiamondTrap const &another):
        ClapTrap(another.name)
    {
        std::cout << "DiamondTrap copy called" << std::endl;
        *this = another ;
    }

    DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other){
        std::cout << "Assignation operator called" << std::endl;
        this->name = other.name;
        return(*this);
    }

    void DiamondTrap::attack(const std::string& target){
        if (this->energyPoints == 0 || this->hitPoints == 0){
            std::cout << "DiamondTrap dont have energy points" << std::endl;
        } else {
            std::cout << "DiamondTrap " << this->name << " attacks " << target <<", causing " << this->attackDamage  << "points of damage!" << std::endl;
        }
    };
    void DiamondTrap::takeDamage(unsigned int amount){
        std::cout << "DiamondTrap receive " << amount << " damage." << std::endl;
        this->energyPoints = this->energyPoints - amount;
        if (this->energyPoints < 0) {
            this->energyPoints = 0;
        }
    };
    void DiamondTrap::beRepaired(unsigned int amount){
        if (this->energyPoints == 0 || this->hitPoints == 0){
            std::cout << "DiamondTrap can\'t do nothing" << std::endl;
        } else {
            this->energyPoints = this->energyPoints + amount;
            this->energyPoints > 10 ? this->energyPoints = 10 : this->energyPoints;
            std::cout << "DiamondTrap " << this->name << " repairs: " << amount << std::endl;
        }
    };

    void DiamondTrap::highFivesGuys(){
        std::cout << "I want high five guys!!" << std::endl;
    }

