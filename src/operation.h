#ifndef OPERATION_H
#define OPERATION_H
#include <unordered_map>

enum class Operation {
  ADD,
  SUBTRACT,
  MULTIPLY,
  DIVIDE,
  NONE,

};

static const std::unordered_map<char, Operation> oper_map{
    {'+', Operation::ADD},
    {'-', Operation::SUBTRACT},
    {'*', Operation::MULTIPLY},
    {'/', Operation::DIVIDE},
};

struct BinaryOperation {
  int operand_1;
  int operand_2;
  Operation operator_;

  BinaryOperation(int op1, int op2, Operation oper)
      : operand_1(op1), operand_2(op2), operator_(oper) {}
  BinaryOperation() : operand_1(0), operand_2(0), operator_(Operation::NONE) {}
};

#endif
