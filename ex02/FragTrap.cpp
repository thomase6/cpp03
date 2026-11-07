#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	if (VERBOSE)
		std::cout << "FragTrap default constructor called\n";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	if (VERBOSE)
		std::cout << "FragTrap " << _name << " destructor called\n";
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	if (VERBOSE)
		std::cout << "FragTrap " << _name << " constructor called\n";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	if (VERBOSE)
		std::cout << "FragTrap copy constructor called\n";
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (VERBOSE)
		std::cout << "FragTrap copy assignment operator called\n";
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " requests a high five!\n";
}
