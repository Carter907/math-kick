#ifndef TOKENIZER_H
#define TOKENIZER_H

#include <string>
#include <unordered_map>
#include <vector>

enum class Token {

  PLUS,
  MINUS,
  ASTERISK,
  CARET,
  FORWARD_SLASH,

  NUMBER,

};

const std::unordered_map<std::string, Token> token_map{

    {"+", Token::PLUS},  {"-", Token::MINUS},         {"*", Token::ASTERISK},
    {"^", Token::CARET}, {"/", Token::FORWARD_SLASH},
};

std::vector<std::string> split_tokens(std::string str);

std::pair<std::string, int> read_int(std::string, int);

#endif
