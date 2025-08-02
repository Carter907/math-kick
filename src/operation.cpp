#include "operation.h"

std::ostream & operator<<(std::ostream &os, const Operation &op)
{
  switch (op)
  {
  case Operation::ADD:
    os << "ADD";
    break;
  case Operation::SUBTRACT:
    os << "SUBTRACT";
    break;
  case Operation::MULTIPLY:
    os << "MULTIPLY";
    break;
  case Operation::DIVIDE:
    os << "DIVIDE";
    break;
  case Operation::NONE:
    os << "NONE";
    break;
  default:
    os << "[Unknown Operation]";
    break;
  }
  return os;
}