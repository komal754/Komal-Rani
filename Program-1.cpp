#include <iostream>
using namespace std;

class Calculator {
    double a, b;
    string operation;

public:
    Calculator(double x, double y, string op) {
        a = x;
        b = y;
        operation = op;
    }

    void calculate() {
        if (operation == "add")
            cout << "Result: " << a + b;
        else if (operation == "subtract")
            cout << "Result: " << a - b;
        else if (operation == "multiply")
            cout << "Result: " << a * b;
        else if (operation == "divide") {
            if (b == 0)
                cout << "Division by zero not allowed";
            else
                cout << "Result: " << a / b;
        } else {
            cout << "Invalid operation";
        }
    }
};

int main() {
    Calculator c(10.5, 2.5, "add");
    c.calculate();
    return 0;
}
