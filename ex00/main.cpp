#include "ClapTrap.hpp"

int main() {
    ClapTrap clap("Clappy");

    clap.attack("target1");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.attack("target2");
    clap.takeDamage(10);
    clap.beRepaired(2);

    return 0;
}