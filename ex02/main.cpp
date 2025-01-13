#include "FragTrap.hpp"
#include <iostream>

int main( void )
{
	FragTrap	Anne("Anne");
	FragTrap	Bob("Bob");

	std::string anneName = "Anne";
	Anne.setName(anneName);

	
	Anne.attack("Bob");
	Bob.takeDamage(Anne.getAttackDamage());

	Anne.highFiveGuys();
	Anne.setAttackDamage(1);
	Anne.attack("Bob");
	Bob.takeDamage(Anne.getAttackDamage());
	
	Bob.beReapired(12);

	Anne.setEnergyPoints(0);
	Anne.attack("Bob");

	Bob.setHitPoints(0);
	Bob.attack("Anne");

	ClapTrap* fragtrapp = new FragTrap();
	fragtrapp->attack("Bob");
	delete fragtrapp;
	return 0;
}