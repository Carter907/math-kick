#include <string>
#include <vector>

std::vector<std::string> split_spaces(std::string str) {

  std::vector<std::string> vec;
  std::string word;

  for (const auto &c : str) {
    if (c == ' ') {
      vec.push_back(word);
      word.clear();
      continue;
    }

    word += c;
  }
  vec.push_back(word);

  return vec;
}
