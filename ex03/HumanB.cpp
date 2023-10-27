#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB() {}

void HumanB::attack() {
  if (this->_weapon != NULL && this->_weapon->getType() != "") {
    std::cout << this->_name;
    std::cout << " attacks with their ";
    std::cout << this->_weapon->getType() << std::endl;
  } else {
    std::cout << this->_name;
    std::cout << " Doesn't have a weapon 🥺." << std::endl;
  }
}

void HumanB::setWeapon(Weapon &weapon) { this->_weapon = &weapon; }
