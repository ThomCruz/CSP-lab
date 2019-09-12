/*
# Paper of size A0 has dimensions 1189mm x 841mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to
its shorter sides. Write a program to calculate and print paper sizes A0, A1.... A8.
*/
#include <stdio.h>
int main()
{
    int Length=1189,Width=841, x, y;
    for (x = 0; x <= 8; x++)
    {
        printf("A%d -> %d x %d\n", x, Length, Width);
        y = Length;
        Length = Width;
        Width = y / 2;
    }
    return 0;
}