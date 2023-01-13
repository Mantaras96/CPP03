
#include "../include/ClapTrap.hpp"

    ClapTrap::ClapTrap(std::string name): name(name){
        std::cout << "ClapTrap constructor called" << std::endl;
        this->hitPoints = 10;
        this->energyPoints = 10;
        this->attackDamage = 0;
    }

    ClapTrap::~ClapTrap(){
        std::cout << "ClapTrap destructor called" << std::endl;
    }

    ClapTrap::ClapTrap(ClapTrap const &another){
        std::cout << "ClapTrap copy called" << std::endl;
        *this = another;
    }

    ClapTrap &ClapTrap::operator=(const ClapTrap &other){
        std::cout << "Assignation operator called" << std::endl;
        this->name = other.name;
        return(*this);
    }

    void ClapTrap::attack(const std::string& target){
        if (this->energyPoints == 0 || this->hitPoints == 0){
            std::cout << "ClapTrap dont have energy points" << std::endl;
        } else {
            std::cout << "ClapTrap " << this->name << " attacks " << target <<", causing " << this->attackDamage  << "points of damage!" << std::endl;
        }
    };
    void ClapTrap::takeDamage(unsigned int amount){
        this->energyPoints = this->energyPoints - amount;
        if (this->energyPoints < 0) {
            this->energyPoints = 0;
        }
        std::cout << "ClapTrap receive " << amount << " damage." << ". Actual life points:" << this->energyPoints << std::endl;
    };
    void ClapTrap::beRepaired(unsigned int amount){
        if (this->energyPoints == 0 || this->hitPoints == 0){
            std::cout << "ClapTrap can\'t do nothing" << std::endl;
        } else {
            this->energyPoints = this->energyPoints + amount;
            this->energyPoints > 10 ? this->energyPoints = 10 : this->energyPoints;
            std::cout << "ClapTrap " << this->name << " repairs: " << amount << ". Actual life points:" << this->energyPoints << std::endl;
        }
    };

