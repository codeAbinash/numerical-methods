#include "../../eval/eval.hpp"

int main() {
    double up, low, s, h, answer;
    int steps;
    string func;
    Eval exp;

    cout << "Enter f(x) : ";
    getline(cin, func);
    cout << "Lower Limit : ";
    cin >> low;
    cout << "Upper Limit : ";
    cin >> up;
    cout << "Number of steps : ";
    cin >> steps;

    exp.expression(func);
    h = (up - low) / steps;
    s = exp.eval(up) + exp.eval(low);

    for(int i = 1; i < steps; i++)
        s += 2 * exp.eval(low + i * h);

    answer = s * h / 2;

    cout << "Integration : " << answer << endl;
    return 0;
}