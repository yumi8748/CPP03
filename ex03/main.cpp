#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    DiamondTrap Diam1;
    // ClapTrap clap("Clappy");
    // ScavTrap scav("Scavvy");
	// FragTrap frag("Fraggy");
    DiamondTrap diam("Diamondy");

    // clap.attack("target1");
    // clap.takeDamage(5);
    // clap.beRepaired(3);

    // scav.attack("target2");
    // scav.takeDamage(20);
    // scav.beRepaired(10);
    // scav.guardGate();

	// frag.attack("target3");
    // frag.takeDamage(20);
    // frag.beRepaired(10);
	// frag.highFivesGuys();

    diam.attack("target3");
    diam.takeDamage(20);
    diam.beRepaired(10);
	diam.whoAmI();

    return 0;
}

//check possible name conflicts in ClapTrap and DiamondTrap, how system detects??
//check leaks possible??