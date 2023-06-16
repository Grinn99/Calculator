#pragma once
#include "IOperator.h"

class ADD : public IOperator
{
public:
    virtual float op(float num1, float num2);
};