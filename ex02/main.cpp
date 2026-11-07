# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
 
int main()
{
	ScavTrap serena("Serena");

	serena.attack("Training Dummy");
	serena.beRepaired(10);
	serena.takeDamage(40);
	serena.guardGate();


	FragTrap pete("Pete");

	pete.attack("Training Dummy");
	pete.beRepaired(20);
	pete.takeDamage(50);
	pete.highFivesGuys();

	return 0;
}
