
#include "../include/ScavTrap.hpp"

    ScavTrap::ScavTrap(): ClapTrap() {
        std::cout << "ScavTrap constructor called" << std::endl;
        this->name = "ScavTrap default";
        this->hitPoints = 100;
        this->energyPoints = 50;
        this->attackDamage = 20;
    }

    ScavTrap::ScavTrap(const std::string name): ClapTrap(name) {
        std::cout << "ScavTrap constructor called" << std::endl;
        this->name = name;
        this->hitPoints = 100;
        this->energyPoints = 50;
        this->attackDamage = 20;
    }

    ScavTrap::~ScavTrap(){
        std::cout << "ScavTrap destructor called" << std::endl;
    }

    ScavTrap::ScavTrap(ScavTrap const &another){
        std::cout << "ScavTrap copy called" << std::endl;
        *this = another;
    }

    ScavTrap &ScavTrap::operator=(const ScavTrap &other){
        std::cout << "Assignation operator called" << std::endl;
        this->name = other.name;
        return(*this);
    }

    void ScavTrap::attack(const std::string& target){
        if (this->energyPoints == 0 || this->hitPoints == 0){
            std::cout << "ScavTrap dont have energy points" << std::endl;
        } else {
            std::cout << "ScavTrap " << this->name << " attacks " << target <<", causing " << this->attackDamage  << "points of damage!" << std::endl;
        }
    };
    void ScavTrap::takeDamage(unsigned int amount){
        std::cout << "ScavTrap receive " << amount << " damage." << std::endl;
        this->energyPoints = this->energyPoints - amount;
        if (this->energyPoints < 0) {
            this->energyPoints = 0;
        }
    };
    void ScavTrap::beRepaired(unsigned int amount){
        if (this->energyPoints == 0 || this->hitPoints == 0){
            std::cout << "ScavTrap can\'t do nothing" << std::endl;
        } else {
            this->energyPoints = this->energyPoints + amount;
            this->energyPoints > 10 ? this->energyPoints = 10 : this->energyPoints;
            std::cout << "ScavTrap " << this->name << " repairs: " << amount << std::endl;
        }
    };

    void ScavTrap::guardGate(){
        std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
    }

