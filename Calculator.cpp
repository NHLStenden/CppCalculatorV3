#include <stdexcept>
#include "Calculator.h"

Calculator::Calculator(ILogger &loggerInstance) : logger(loggerInstance) {}

double Calculator::compute(double operand1, char op, double operand2) {
    double result = 0;
    switch (op) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 == 0) {
                throw std::runtime_error("Error: Division by zero is not allowed.");
            }
            result = operand1 / operand2;
            break;
        default:
            throw std::runtime_error("Error: Unknown operator.");
    }
    std:std::string logmessage = std::to_string(operand1) + " " + op + " " + std::to_string(operand2) + " = " + std::to_string(result);

    logger.log(logmessage);

    return result;
}
