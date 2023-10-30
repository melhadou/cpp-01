#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
  if (N <= 0) {
    std::cerr << "N must be greater than 0" << std::endl;
    return NULL;
  }
  Zombie *bunchOfZombies = new Zombie[N];
  for (int i = 0; i < N; i++) {
    bunchOfZombies[i].setZombieName(name);
  }
  return bunchOfZombies;
}
