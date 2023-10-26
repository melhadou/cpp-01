#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

#define RESET "\033[0m"
#define RED "\033[1;31m"

class Zombie {
private:
  std::string _name;

public:
  Zombie(std::string name);
  ~Zombie(void);
  void announce(void);
};

// general functions
Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
