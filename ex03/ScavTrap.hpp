#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
    protected:
        ScavTrap(const std::string &name);
        ~ScavTrap();
        void    guardGate();
        void attack(const std::string& target);
};

#endif