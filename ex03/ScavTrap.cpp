#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    std::cout << "ScavTrap " << name << " created!" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout<< "ScavTrap " << Name << " Destroyed!" << std::endl;
}

void    ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
