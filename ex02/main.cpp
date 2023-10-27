#include <iostream>

int main(void) {
  //
  //
  std::string var = "HI THIS IS BRAIN";
  std::string *stringPTR = &var;
  std::string &stringREF = var;

  std::cout << "var => " << &var << std::endl;
  std::cout << "stringPTR => " << &stringPTR << std::endl;
  std::cout << "stringREF => " << &stringREF << std::endl;
  std::cout << "var value => " << var << std::endl;
  std::cout << "stringPTR value => " << *stringPTR << std::endl;
  std::cout << "stringREF value => " << stringREF << std::endl;
  return 0;
}
