#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

#define RESET "\033[0m"
#define RED "\033[1;31m"

class Zombie {

public:
  Zombie(void);
  ~Zombie(void);
  void setZombieName(std::string name);
  void announce(void);

private:
  std::string _name;
};

// general functions
Zombie *zombieHorde(int N, std::string name);

#endif
