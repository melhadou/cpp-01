#include "Harl.hpp"

int main(void) {
  std::string input;

  Harl harl;
  while (true) {
    std::cout << "Enter a complaint level:" << std::endl;
    std::getline(std::cin, input);
    if (std::cin.eof())
      return 1;
    harl.complain(input);
  }
  return 0;
}
