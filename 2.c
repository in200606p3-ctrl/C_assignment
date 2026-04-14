#include <stdio.h>

int main() {
    double a, b, sum;

    printf("두 수 입력: ");
    scanf("%lf %lf", &a, &b);

    sum = a + b;

    printf("합: %lf\n", sum);

    return 0;
}