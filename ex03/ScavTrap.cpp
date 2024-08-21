#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name): ClapTrap(name)
{
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    std::cout << "ScavTrap " << name << " created!" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout<< "ScavTrap " << name << " Destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (Energy_points > 0 && Hit_points > 0)
    {
        Energy_points--;
        std::cout<< "ScavTrap " << Name << " attacks " << target<< ", causing " << Attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << Name << " has no energy or hit points to attack!" << std::endl; 
}

void    ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
