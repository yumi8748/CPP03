#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called!" << std::endl;
    name = "Default";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap( const ScavTrap &other )
{
    std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap copy assignment constructor called." << std::endl;
    name = other.name;
    Attack_damage = other.Attack_damage;
    Energy_points = other.Energy_points;
    Hit_points = other.Hit_points;
    return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout<< "ScavTrap " << name << " destructor called!" << std::endl;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name)
{
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    std::cout << "ScavTrap " << name << " created!" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (Energy_points > 0 && Hit_points > 0)
    {
        Energy_points--;
        std::cout<< "ScavTrap " << name << " attacks " << target<< ", causing " << Attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << name << " has no energy or hit points to attack!" << std::endl; 
}

void    ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
