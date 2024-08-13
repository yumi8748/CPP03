#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap{
    private:
        std::string name;
        unsigned int Hit_points;
        unsigned int Energy_points;
        unsigned int Attack_damage;

    public:
        ClapTrap();
        ClapTrap(const std::string &name);
        ~ClapTrap();
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif