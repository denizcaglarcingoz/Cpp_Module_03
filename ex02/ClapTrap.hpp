#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


class ClapTrap
{
	private:
		std::string 	_name;
		int				_hitPoints; // represent the health of the ClapTrap
		int				_energyPoints; // (10)
		int				_attackDamage; //(0)

	public:
						ClapTrap();
						ClapTrap(std::string name);

						ClapTrap(const ClapTrap& other);
		ClapTrap&		operator=(const ClapTrap& other);

		std::string		getName()const;
		int				getHitPoints()const;
		int				getEnergyPoints()const;
		int				getAttackDamage()const;

		void			setName(std::string name);
		void			setHitPoints(int hitPoints);
		void			setEnergyPoints(int energyPoints);
		void			setAttackDamage(int attackDamage);

		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beReapired(unsigned int amount);

		virtual			~ClapTrap();

};

#endif