#include <stdio.h>

int main() {
    int a;
    float b;
    char c;
    char d[10];
    double e;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a float: ");
    scanf("%f", &b);

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("Enter a string: ");
    scanf("%9s", d);

    printf("Enter a double: ");
    scanf("%lf", &e);

    printf("%d, %.1f, %c, %s, %.1f\n", a, b, c, d, e);
    return 0;
}
