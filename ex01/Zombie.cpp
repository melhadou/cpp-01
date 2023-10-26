#include "Zombie.hpp"

Zombie::Zombie() {}
Zombie::~Zombie() {
  std::cout << RED << this->_name << " Is dead 💀" << RESET << std::endl;
}
void Zombie::setZombieName(std::string name) { this->_name = name; }
void Zombie::announce(void) {
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
