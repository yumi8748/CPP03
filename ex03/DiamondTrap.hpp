#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap{
    public:
		DiamondTrap();
		DiamondTrap( const DiamondTrap &other );
		DiamondTrap &operator=(const DiamondTrap& other);
        ~DiamondTrap();

		DiamondTrap(const std::string Name);
		void attack(const std::string& target);
		void whoAmI();
	private:
		std::string name;
};

#endif