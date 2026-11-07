#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	if (VERBOSE)
		std::cout << "ClapTrap " << _name << " constructor called\n";
}

ClapTrap::~ClapTrap()
{
	if (VERBOSE)
		std::cout << "ClapTrap " << _name << " destructor called\n";
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	if (VERBOSE)
		std::cout << "ClapTrap " << _name << " constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	if (VERBOSE)
		std::cout << "ClapTrap copy constructor called\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (VERBOSE)
		std::cout << "ClapTrap copy assignment operator called\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " ran out of Hit Points\n";
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy left to attack\n";
		return ;
	}
	--this->_energyPoints;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " ran out of Hit Points\n";
		return ;
	}
	if (amount >= this->_hitPoints)
		this->_hitPoints = 0;
	else 
		this->_hitPoints = this->_hitPoints - amount;
	std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage. its Hit Points are at: " << this->_hitPoints << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " ran out of Hit Points\n";
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy left to repair itself\n";
		return ;
	}
	--this->_energyPoints;
	this->_hitPoints = this->_hitPoints + amount;
	std::cout << "ClapTrap " << this->_name << " repaired itself for " << amount << ". its Hit Points are at: " << this->_hitPoints << "\n";
}
