#include <iostream>

class Calculator
{
    double amount = 0;
    public:
        void add(double x) {amount += x;};
        void min(double x) {amount -= x;};
        void mul(double x) {amount *= x;};
        void divide(double x) {amount /= x;};
        void reset() {amount = 0;};
        void setBase(double x) {amount = x;};
        double result() {return amount;};
};

int main() {
    Calculator calc;
    double input;
    char opr;
    bool exit = false;
    while(!exit)
    {
        if(calc.result() == 0)
        {
            std::cout << "Number: ";
            std::cin >> input;
            calc.setBase(input);
        }
        std::cout << "Operator (+ - / * =): ";
        std::cin >> opr;

        if(opr != '=')
        {
            std::cout << "Number: ";
            std::cin >> input;
        }
        
        switch (opr)
        {
            case '+':
                calc.add(input);
                break;
            case '-':
                calc.min(input);
                break;
            case '*':
                calc.mul(input);
                break;
            case '/':
                calc.divide(input);
                break;
            case '=':
                std::cout << "Result: " << calc.result() << std::endl;
                exit = true;
                break;
            default:
                std::cout << "Operator not recognized." << std::endl;
                break;
        }
    }
    return 0;
}