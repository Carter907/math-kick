#include "tokenizer.h"
#include <iostream>
int main() {

  std::string token_str{"1   + 2  aljdaf / 5  + %% 9134 a  "};

  std::vector<std::string> tokens = split_tokens(token_str);
  for (auto token : tokens) {

    std::cout << '-' << token << '\n';
  }

  return 0;
}
