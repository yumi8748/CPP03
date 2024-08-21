#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap{
    public:
        DiamondTrap(const std::string Name);
        ~DiamondTrap();

		void attack(const std::string& target);
		void whoAmI();
	private:
		std::string name;
};

#endif