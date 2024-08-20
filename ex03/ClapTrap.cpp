#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &Name): Name(Name), Hit_points(10), Energy_points(10), Attack_damage(0)
{
     std::cout<< "ClapTrap " << Name << " Created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout<< "ClapTrap " << Name << " Destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if (Energy_points > 0 && Hit_points > 0)
    {
        Energy_points--;
        std::cout<< "ClapTrap " << Name << " attacks " << target<< ", causing " << Attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << Name << " has no energy or hit points to attack!" << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount){
    Hit_points -= amount;
    if (Hit_points < 0)
        Hit_points = 0;
    std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (Energy_points > 0 && Hit_points > 0)
    {
        Energy_points--;
        Hit_points += amount;
        std::cout << "ClapTrap " << Name << " is repaired for " << amount << " hit points!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << Name << " has no energy or hit points to repair!" << std::endl;
}
