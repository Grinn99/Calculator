class Calculator
{
public:
    void input();
    void calculate();
    void output();

private:
    void add();
    void sub();
    void mul();
    void devide();

private:
    int num1, num2;
    char op;
    int res;
};