#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name){
}

DiamondTrap::~DiamondTrap();


void DiamondTrap::whoAmI()
{
	std::cout<< "My name is " << this->name << ", and my ClapTrap name is " << this->ClapTrap::Name << std::endl;
}