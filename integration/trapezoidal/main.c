#include "stdio.h"
#define FUNC x*x - 2 * x + 12

double f(double x) { return FUNC; }

int main() {
    double up, low, s, h, answer;
    int steps, i;

    printf("Lower Limit : ");
    scanf("%lf", &low);
    printf("Upper Limit : ");
    scanf("%lf", &up);
    printf("Number of steps : ");
    scanf("%d", &steps);

    h = (up - low) / steps;
    s = f(up) + f(low);

    for (i = 1; i < steps; i++) 
        s += 2 * f(low + i * h);

    answer = s * h / 2;

    printf("Integration : %lf", answer);
    return 0;
}