#include <iostream>
#include <cmath>
using namespace std;

// Прототип функції
double g(const double x, const double y);

int main() {
    double r, s;
    cout << "r = "; cin >> r;
    cout << "s = "; cin >> s;

    // Обчислення головного виразу з використанням функції g()
    double result = (g(1, r) + g(s * s - 1, r * r)) / g(s, 1 + r);

    cout << "Result = " << result << endl;

    return 0;
}

// Визначення функції згідно з умовою
double g(const double x, const double y) {
    double result = (x * x + y * y + sin(x * y)) / (1 + abs(x * y));
    return result;
}