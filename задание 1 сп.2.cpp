#include <cstdio>
#include <cmath>
int main() {
    double a, b, c;

    printf("Введите катет a: ");
    scanf("%lf", &a);

    printf("Введите катет b: ");
    scanf("%lf", &b);

    c = sqrt(a * a + b * b);

    printf("Гипотенуза c = %.2f\n", c);

    return 0;
}