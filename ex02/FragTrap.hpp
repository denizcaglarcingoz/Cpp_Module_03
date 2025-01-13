#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


class FragTrap : public ClapTrap
{
	public:
					FragTrap();
					FragTrap(std::string clapTrapName);

					FragTrap(const FragTrap& other);
		FragTrap&	operator=(const FragTrap& other);

		void		highFiveGuys();

					~FragTrap();

};


#endif