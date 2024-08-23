#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap{
    public:
        FragTrap();
        FragTrap( const FragTrap &other );
		FragTrap &operator=(const FragTrap& other);
        ~FragTrap();

        FragTrap(const std::string name);
        void    guardGate();
		void highFivesGuys(void);
};

#endif