#pragma once
#include <fstream>
#include <iostream>
#include <sstream>

#define RESET "\033[0m"
#define RED "\033[1;31m"

std::string replace(std::string &content, std::string s1, std::string s2);
bool strAsFile(std::string filename, std::string &str);
bool fileAsStr(std::string filename, std::string &str);
