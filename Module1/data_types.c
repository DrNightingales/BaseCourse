#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{
    double dF = 98;
    double dC;
    // scanf("%d", &dF);
    dC = (dF - 32) * (5.0 / 9.0);
    printf("You value in Celcius: %.2f\n", dC);
    //%f - float, double, long double
    //%d - int, long int, unsigned int
    //%s - char *s

    return 0;
}