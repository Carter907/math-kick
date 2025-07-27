#include "calculator.h"
#include "parse.h"
#include <iostream>
#include <string>

void Calculator::eval(std::string expr) {

  std::vector<BinaryOperation> bin_ops = parse_expression(expr);

  this->bin_expr = bin_ops[0];
}

void Calculator::print_result() {

  int result = evaluate();

  std::cout << result << '\n';
}
