
#include "../include/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
    std::cout << "FragTrap constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

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

void FragTrap::highFivesGuys(){
    std::cout << "I want high five guys!!" << std::endl;
}

