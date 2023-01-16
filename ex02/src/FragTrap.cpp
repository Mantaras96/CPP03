
#include "../include/FragTrap.hpp"

FragTrap::FragTrap(const std::string name): ClapTrap(name) {
    std::cout << "FragTrap constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}
FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called" << std::endl;
}
FragTrap::FragTrap(FragTrap const &another):
    ClapTrap(another.name)
{
    std::cout << "FragTrap copy called" << std::endl;
    *this = another ;
}
FragTrap &FragTrap::operator=(const FragTrap &other){
    std::cout << "Assignation operator called" << std::endl;
    this->name = other.name;
    return(*this);
}

void FragTrap::attack(const std::string& target){
    if (this->energyPoints == 0 || this->hitPoints == 0){
        std::cout << "FragTrap dont have energy points or is dead." << std::endl;
    } else {
        std::cout << "FragTrap " << this->name << " attacks " << target <<", causing " << this->attackDamage  << "points of damage!" << std::endl;
        this->energyPoints = this->energyPoints - 1;
    }
};

void FragTrap::takeDamage(unsigned int amount){
    std::cout << "Take dmg: FragTrap have life: " << this->hitPoints << std::endl;
    this->hitPoints = this->hitPoints - amount;
    if (this->hitPoints < 0) {
        this->hitPoints = 0;
    }
    std::cout << "Take dmg FragTrap receive: " << amount << " damage." << ". Actual life points:" << this->hitPoints << std::endl;
};

void FragTrap::beRepaired(unsigned int amount){
    if (this->energyPoints == 0 || this->hitPoints == 0){
        std::cout << "FragTrap can\'t do nothing" << std::endl;
    } else {
        std::cout << "FragTrap have life: " << this->hitPoints << std::endl;
        this->hitPoints = this->hitPoints + amount;
        this->hitPoints > 10 ? this->hitPoints = 10 : this->hitPoints;
        this->energyPoints = this->energyPoints - 1;
        std::cout << "FragTrap " << this->name << " repairs: " << amount << ". Actual life points:" << this->hitPoints << std::endl;
    }
};

void FragTrap::highFivesGuys(){
    std::cout << "I want high five guys!!" << std::endl;
}

