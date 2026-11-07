# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
 
int main()
{
	ScavTrap serena("Serena");

	serena.attack("Training Dummy");
	serena.beRepaired(10);
	serena.takeDamage(40);
	serena.guardGate();

	return 0;
}
