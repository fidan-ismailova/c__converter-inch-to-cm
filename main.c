#include <stdio.h>
#include <stdlib.h>

int printLine(int x)
{
    for(int i = 0; i < x; i++)
    {
        printf("~");
    }
    printf("\n");
}

int main(void)
{
    int n = 50;
    printLine(n);
    printf_s(" CONVERTER from INCHES to CM\n");
    printLine(n);

    printf("\n # Please enter INCHES then press <ENTER>: ");
    double inch;
    scanf("%lf", &inch);
    double cm = inch * 2.54;

    printf_s("\n");

    printf("\tINCHES = %lf\n", inch);
    printf("\t    CM = %lf\n", cm);

    printf_s("\n");
    printLine(n);
    printf_s(" [MacroMuscle, Inc.]\n");
    return 0;
}
