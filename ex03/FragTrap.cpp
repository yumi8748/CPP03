#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name): ClapTrap(name)
{
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
    std::cout << "FragTrap " << name << " created!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout<< "FragTrap " << Name << " Destroyed!" << std::endl;
}

void FragTrap::attack(const std::string& target){
    if (Energy_points > 0 && Hit_points > 0)
    {
        Energy_points--;
        std::cout<< "FragTrap " << Name << " attacks " << target<< ", causing " << Attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "FragTrap " << Name << " has no energy or hit points to attack!" << std::endl; 
}

void FragTrap::highFivesGuys(void)
{
	 std::cout << "Hey! High Five!" << std::endl;
	 //what else???
}