#include "FragTrap.hpp"


FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called!" << std::endl;
    name = "Default";
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap( const FragTrap &other )
{
    std::cout << "FragTrap copy constructor called." << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap copy assignment constructor called." << std::endl;
    name = other.name;
    Attack_damage = other.Attack_damage;
    Energy_points = other.Energy_points;
    Hit_points = other.Hit_points;
    return (*this);
}

FragTrap::~FragTrap(){
    std::cout<< "FragTrap " << name << " destructor called!" << std::endl;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
    std::cout<< "FragTrap " << name << " constructor called!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	 std::cout << "Hey! High Five!" << std::endl;
	 //what else???
}