#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main( void )
{

	// FragTrap frag("Frag");

	// frag.beRepaired(10);
	// frag.attack("Mi friend");
	// frag.takeDamage(20);
	// frag.highFivesGuys();

	ScavTrap st("Scav");

	st.attack("Persona");
	st.beRepaired(100);
	st.takeDamage(5);
	st.guardGate();


}