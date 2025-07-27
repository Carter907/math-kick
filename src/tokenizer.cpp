#include "tokenizer.h"
#include <iostream>

// 1+2 -> 1,+,2
std::vector<std::string> split_tokens(std::string str) {

  std::vector<std::string> tokens{};

  for (int i = 0; i < str.length(); i++) {

    if (str.at(i) == ' ') {
      continue;
    }

    std::string pot_token = std::string(1, str.at(i));
    // found token
    if (token_map.find(pot_token) != token_map.end()) {
      tokens.push_back(pot_token);
    } else if (std::isdigit(pot_token.at(0))) {
      std::string n_str = read_int(str, i);
      tokens.push_back(n_str);

      i += n_str.length() - 1;
    }
  }

  return tokens;
}

std::string read_int(std::string str, int start) {

  int end = start;
  while (end < str.length() && isdigit(str.at(end))) {
    end++;
  }

  return str.substr(start, end - start);
}
