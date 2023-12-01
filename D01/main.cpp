#include <cctype>
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
#include <sys/types.h>

int sum = 0;
// std::string tmpStorage;

void part1(std::string &line) {
  std::string tmpStorage;

  for (unsigned int i = 0; i < line.length(); ++i) {
    if (isdigit(line[i])) {
      tmpStorage = tmpStorage + line[i];
      break;
    }
  }
  for (u_int32_t i = line.length(); i >= 0; i--) {
    if (isdigit(line[i])) {
      tmpStorage = tmpStorage + line[i];
      break;
    }
  }
  sum += std::stoi(tmpStorage);
}

int main(int argc, char *argv[]) {
  std::string line;

  std::ifstream file("D01.txt");
  while (getline(file, line)) {
    part1(line);
  }
  std::cout << sum << std::endl;
  return 0;
}
