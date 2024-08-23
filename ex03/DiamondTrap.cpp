#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): name("Default")
{
	ClapTrap::name = name + "_clap_name",
    std::cout << "DiamondTrap default constructor called!" << std::endl;
    // ClapTrap::name = name + "_clap_name";
    Hit_points = FragTrap::Hit_points;
    Energy_points = ScavTrap::Energy_points;
    Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap( const DiamondTrap &other ): ClapTrap(other), name(other.name)
{
    std::cout << "DiamondTrap copy constructor called." << std::endl;
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& other)
{
    std::cout << "DiamondTrap copy assignment constructor called." << std::endl;
    name = other.name;
    Attack_damage = other.Attack_damage;
    Energy_points = other.Energy_points;
    Hit_points = other.Hit_points;
    return (*this);
}

DiamondTrap::DiamondTrap(const std::string name): name(name)
{
	ClapTrap::name = name + "_clap_name";
	Hit_points = FragTrap::Hit_points;
    Energy_points = ScavTrap::Energy_points;
    Attack_damage = FragTrap::Attack_damage;
    std::cout<< "DiamondTrap " << name << " constructor called!" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout<< "DiamondTrap " << name << " destructor called!" << std::endl;
}


void DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout<< "My name is " << name << ", and my ClapTrap name is " << ClapTrap::name << std::endl;
}
