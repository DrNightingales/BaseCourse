#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{

    for (int i = 0; i <= 10; ++i)
    {
        double x = i / 10.0;
        double sinx = sin(x);
        printf("sin(%f)=%f\n", x, sinx);
    }
    return 0;
}