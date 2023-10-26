#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
  Zombie *bunchOfZombies = new Zombie[N];
  for (int i = 0; i < N; i++) {
    bunchOfZombies[i].setZombieName(name);
  }
  return bunchOfZombies;
}
