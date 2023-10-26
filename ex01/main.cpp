#include "Zombie.hpp"

int main(void) {
  Zombie *bunchOfTheme = zombieHorde(10, "said");
  for (int i = 0; i < 10; i++) {
    bunchOfTheme[i].announce();
  }
  delete[] bunchOfTheme;
  return 0;
}
