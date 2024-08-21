#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name){
	// this->name = this->ClapTrap::name + "_clap_name";
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << this->name << " Destroyed!" << std::endl;
}


void DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout<< "My name is " << this->name << ", and my ClapTrap name is " << this->ClapTrap::Name << std::endl;
}

//Orthodox Canonical Form！！