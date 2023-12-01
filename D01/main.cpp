#include <cctype>
#include <cstddef>
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
#include <sys/types.h>

int sum = 0;
std::string numbers[10] = {"zero", "one", "two",   "three", "four",
                           "five", "six", "seven", "eight", "nine"};
// std::string tmpStorage;

void part1(std::string &line) {
  std::string tmpStorage;

  for (unsigned int i = 0; i < line.length(); ++i) {
    if (isdigit(line[i])) {
      tmpStorage = tmpStorage + line[i];
      break;
    }
  }
  for (unsigned int i = line.length(); i >= 0; i--) {
    if (isdigit(line[i])) {
      tmpStorage = tmpStorage + line[i];
      break;
    }
  }
  sum += std::stoi(tmpStorage);
}

void part2(std::string &line) {

  for (int i = 0; i <= 9; i++) {
    size_t pos = line.find(numbers[i]);
    std::cout << pos << std::endl;
    // if (pos > 0)
    //   std::cout << pos << std::endl;
  }
}

int main(int argc, char *argv[]) {
  std::string line;

  std::ifstream file("D01.txt");
  while (getline(file, line)) {
    // part1(line);
    part2(line);
    break;
  }
  // std::cout << sum << std::endl;
  return 0;
}
