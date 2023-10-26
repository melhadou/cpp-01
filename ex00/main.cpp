#include "Zombie.hpp"

int main(void) {
  Zombie *said = newZombie("Said From heap");
  Zombie *tis = newZombie("achraf From heap");
  Zombie *teo = newZombie("teo From heap");
  randomChump("mohamed");
  randomChump("ahmed");
  randomChump("mol taxi");
  randomChump("larbi");
  said->announce();
  tis->announce();
  teo->announce();
  delete said;
  delete tis;
  delete teo;
  return 0;
}
