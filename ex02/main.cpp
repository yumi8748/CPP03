#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    FragTrap frag1;
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavvy");
	FragTrap frag("Fraggy");

    clap.attack("target1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    scav.attack("target2");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

	frag.attack("target3");
    frag.takeDamage(20);
    frag.beRepaired(10);
	frag.highFivesGuys();

    return 0;
}