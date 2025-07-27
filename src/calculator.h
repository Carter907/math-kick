#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <sstream>
#include <string>
#include <vector>

#include "operation.h"

class Calculator {
  BinaryOperation bin_expr;

  int evaluate() {

    int res{};
    switch (bin_expr.operator_) {
    case Operation::ADD:
      res = bin_expr.operand_1 + bin_expr.operand_2;
      break;
    case Operation::SUBTRACT:
      res = bin_expr.operand_1 - bin_expr.operand_2;
      break;
    case Operation::DIVIDE:
      res = bin_expr.operand_1 / bin_expr.operand_2;
      break;
    case Operation::MULTIPLY:
      res = bin_expr.operand_1 * bin_expr.operand_2;
      break;
    default:
      break;
    }
    return res;
  };

public:
  Calculator() : bin_expr(BinaryOperation()) {};

  void eval(std::string);

  void print_result();
};

#endif
