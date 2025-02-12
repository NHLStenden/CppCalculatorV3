#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "ILogger.h"

class Calculator {
private:
    ILogger &logger;
public:
    explicit Calculator(ILogger &loggerInstance);

    double calculate(double a, double b, char op);
};

#endif // CALCULATOR_H