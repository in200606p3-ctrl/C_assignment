#include <stdio.h>

double Add(double x, double y) {
    return x + y;
}

int main() {
    double a = 5.0, b = 6.0;
    double result;

    result = Add(a, b);

    printf("합: %lf\n", result);

    return 0;
}