#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: public ClapTrap{
    public:
        FragTrap(const std::string &name);
        ~FragTrap();
        void    guardGate();
        void attack(const std::string& target);
};

#endif