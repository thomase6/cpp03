#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# ifndef VERBOSE
#  define VERBOSE 0
# endif // VERBOSE

# include <string>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ClapTrap();
	virtual ~ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);


	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif //CLAPTRAP_HPP
