#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
    protected:
        FragTrap(const std::string &name);
        ~FragTrap();
        void    guardGate();
		void highFivesGuys(void);
};

#endif