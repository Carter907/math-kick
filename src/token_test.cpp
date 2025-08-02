#include "tokenizer.h"
#include <iostream>
int main() {

  std::string token_str{"1 + 2  / 5 +34"};

  std::vector<std::string> tokens = split_tokens(token_str);
  for (auto token : tokens) {
    std::cout << token;
  }
  std::cout << '\n';

  return 0;
}
