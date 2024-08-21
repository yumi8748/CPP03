#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name): name(name), Hit_points(10), Energy_points(10), Attack_damage(0)
{
     std::cout<< "ClapTrap " << name << " Created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout<< "ClapTrap " << name << " Destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if (Energy_points > 0 && Hit_points > 0)
    {
        Energy_points--;
        std::cout<< "ClapTrap " << name << " attacks " << target<< ", causing " << Attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " has no energy or hit points to attack!" << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount){
    Hit_points -= amount;
    if (Hit_points < 0)
        Hit_points = 0;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (Energy_points > 0 && Hit_points > 0)
    {
        Energy_points--;
        Hit_points += amount;
        std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " has no energy or hit points to repair!" << std::endl;
}
