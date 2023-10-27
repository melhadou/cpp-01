#include "sed-repl.hpp"

std::string replace(std::string &content, std::string s1, std::string s2) {
  std::string::size_type idx;
  idx = 0;

  while (std::string::npos != (idx = content.find(s1, idx))) {
    content.erase(idx, s1.size());
    content.insert(idx, s2);
    idx += s2.size();
  }

  std::string ret;
  return ret;
}
