#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <sstream>
#include <string>
#include <vector>

#include "operation.h"

class Calculator
{
  std::vector<BinaryOperation> expression;

  int evaluate()
  {

    int res = expression[0].operand_1;
    for (const auto &bin_op : expression)
    {

      switch (bin_op.operator_)
      {
      case Operation::ADD:
        res = res + bin_op.operand_2;
        break;
      case Operation::SUBTRACT:
        res = res - bin_op.operand_2;
        break;
      case Operation::DIVIDE:
        res = res / bin_op.operand_2;
        break;
      case Operation::MULTIPLY:
        res = res * bin_op.operand_2;
        break;
      default:
        break;
      }
    }

    return res;
  };

public:
  Calculator()
  {
    expression = std::vector<BinaryOperation>{};
  };

  void eval(std::string);

  void print_result();
};

#endif
