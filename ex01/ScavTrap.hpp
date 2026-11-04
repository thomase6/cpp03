#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap //inheritance
{
public:
	ScavTrap();
	virtual ~ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);

	virtual void attack(const std::string& target);
	void guardGate();
};

#endif //SCAVTRAP_HPP
