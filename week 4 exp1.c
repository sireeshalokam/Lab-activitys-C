#include <stdio.h>

int main()
{
    int A, B, C, D, E, F, G, i, J;
    int x, y;

    printf("Enter values of A, B, C, D, E, F, G: ");
    scanf("%d%d%d%d%d%d%d", &A, &B, &C, &D, &E, &F, &G);

    x = A - B * C + (D * E) + F * G;
    y = A / B * C - B + A * D / 3;

    printf("Expression a = %d\n", x);
    printf("Expression b = %d\n", y);

    i = 5;
    J = (i++) + (++i);
    printf("Expression d: J = %d\n", J);

    return 0;
}