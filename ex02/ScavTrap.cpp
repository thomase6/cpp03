#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	if (VERBOSE)
		std::cout << "ScavTrap default constructor called\n";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	if (VERBOSE)
		std::cout << "ScavTrap " << _name << " destructor called\n";
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	if (VERBOSE)
		std::cout << "ScavTrap " << _name << " constructor called\n";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	if (VERBOSE)
		std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (VERBOSE)
		std::cout << "ScavTrap copy assignment operator called\n";
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " ran out of Hit Points\n";
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " has no energy left to attack\n";
		return ;
	}
	--this->_energyPoints;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode\n";
}
