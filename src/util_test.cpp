#include "util.h"
#include <iostream>
#include <string>

int main() {

  std::vector<std::string> words = split_spaces("1 + 2");

  for (const auto &word : words) {
    std::cout << word << '\n';
  }

  return 0;
}
