#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& obj);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate(void);
};
