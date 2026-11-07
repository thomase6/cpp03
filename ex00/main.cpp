# include "ClapTrap.hpp"
 
int main()
{
	// testing attack and running out of energy
	ClapTrap bob("bob");
	ClapTrap jim;

	for (int i = 0; i < 11; i++)
		bob.attack("Training Dummy");
	
	// testing taking damage and repairing
	ClapTrap harold("harold");

	harold.takeDamage(2);
	harold.beRepaired(2);
	// testing lethal damage
	harold.takeDamage(100);
	// testing actions after lethal damage
	harold.attack("Training Dummy");
	harold.beRepaired(100);
	harold.takeDamage(1);

	return 0;
}
