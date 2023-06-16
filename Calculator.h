
#include "IOperator.h"

class Calculator
{
public:
    void input();
    void calculate();
    void output();

private:
    int num1, num2;
    char op;
    float res;
    IOperator* iop;
};