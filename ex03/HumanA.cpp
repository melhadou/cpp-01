#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : _name(name), _weapon(weapon) {}

void HumanA::attack() {
  if (this->_weapon.getType() != "") {
    std::cout << this->_name;
    std::cout << " attacks with their ";
    std::cout << this->_weapon.getType() << std::endl;
  } else {
    std::cout << this->_name;
    std::cout << " Doesn't have a weapon 🥺." << std::endl;
  }
}

HumanA::~HumanA() {}
