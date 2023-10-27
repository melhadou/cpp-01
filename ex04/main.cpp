#include "sed-repl.hpp"

std::string replace(std::string &content, std::string s1, std::string s2);

int main(int ac, char *av[]) {
  if (ac == 4) {
    (void)av;

    std::string ret;
    // open file
    if (!fileAsStr(av[1], ret)) {
      std::cerr << RED << "File :=> " << av[1] << " Not Found." << RESET
                << std::endl;
      return -1;
    }

    replace(ret, av[2], av[3]);
    // writing to a file
    std::string file = std::string(av[1]) + std::string(".replace");
    if (!strAsFile(file, ret)) {
      std::cerr << RED << "File :=> " << file << " Couldn't be created."
                << RESET << std::endl;
      return -1;
    }
    return 0;
  }
  std::cout << RED
            << "Usage: ./sedRepl <filename> 's1 : to be replaced' 's2: "
               "replaced by'"
            << RESET << std::endl;
  return -1;
}
