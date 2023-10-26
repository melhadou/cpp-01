#include "Zombie.hpp"

Zombie::Zombie(std::string name) { this->_name = name; }

void Zombie::announce() {
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
  std::cout << RED << this->_name << " Is dead 💀" << RESET << std::endl;
}
