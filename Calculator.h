#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "ILogger.h"

class Calculator {
private:
    ILogger &logger;
public:
    explicit Calculator(ILogger &loggerInstance);

    double compute(double a, char op, double b);
};

#endif // CALCULATOR_H