#include "sed-repl.hpp"

// get content from file to str
bool fileAsStr(std::string filename, std::string &str) {
  std::stringstream ss;
  std::ifstream fs;

  fs.open(filename.c_str());
  if (!fs.is_open())
    return false;
  ss << fs.rdbuf();
  str = ss.str();
  return true;
}
// write from str to file
//
bool strAsFile(std::string filename, std::string &str) {
  // std::stringstream ss;
  std::ofstream fs;

  fs.open(filename.c_str());
  if (!fs.is_open())
    return false;
  fs << str;
  return true;
}
