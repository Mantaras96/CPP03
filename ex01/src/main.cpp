#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int	main( void )
{

	ScavTrap st("ScavTr4p");

	st.attack("Persona");
	st.beRepaired(100);
	st.takeDamage(5);
	st.guardGate();
}