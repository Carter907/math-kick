#include "calculator.h"
#include "parse.h"
#include "operation.h"
#include <iostream>
#include <string>

void Calculator::eval(std::string expr)
{

  std::vector<BinaryOperation> bin_ops = parse_expression(expr);

  for (const auto & bin_op : bin_ops) {
    std::cout << bin_op.operand_1 << bin_op.operator_ << bin_op.operand_2 << '\n';
  }

  expression = bin_ops;
}

void Calculator::print_result()
{

  int result = evaluate();

  std::cout << result << '\n';
}
