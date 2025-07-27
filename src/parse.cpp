#include "parse.h"
#include "operation.h"
#include "tokenizer.h"

std::vector<BinaryOperation> parse_expression(std::string expr) {
  std::vector<BinaryOperation> res{};
  std::vector<std::string> split{split_tokens(expr)};
  std::vector<std::vector<std::string>> opers;

  for (int i = 0; i < 3; i++) {

    if (i % 3 == 0) {
      opers.push_back(std::vector<std::string>());
    }

    opers[i / 3].push_back(split[i]);
  }

  for (const auto &op_vec : opers) {

    int operand1 = std::stoi(op_vec[0]);
    int operand2 = std::stoi(op_vec[2]);
    Operation op = oper_map.find(op_vec[1][0])->second;

    BinaryOperation bin_op = BinaryOperation(operand1, operand2, op);

    res.push_back(bin_op);
  }

  return res;
}
