#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
  // create new instance
  Zombie *newZombiePtr = new Zombie(name);
  // return object allocated on heap;
  return newZombiePtr;
}
