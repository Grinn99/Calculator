#include "Calculator.h"
#include <iostream>

using namespace std;

void Calculator::input()
{
    cin >> num1 >> op >> num2;
}

void Calculator::calculate()
{
    if(op == '+')
        add();
    else if(op == '-')
        sub();
    else if(op == '*')
        mul();
    else if(op == '/')
        devide();
    
}
void Calculator::output()
{
    cout << res << endl;
}

void Calculator::add()
{
    res = num1 + num2;
}
void Calculator::sub()
{
    res = num1 - num2;
}
void Calculator::mul()
{
    res = num1 * num2;
}
void Calculator::devide()
{
    if(num2 != 0)
        (float)res = (float)num1 / (float)num2;
}