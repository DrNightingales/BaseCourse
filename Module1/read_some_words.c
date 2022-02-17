#include <stdio.h>

int main()
{
    int i = 0;
    int *ptr_i = &i;

    while (scanf("%d", ptr_i) != EOF)
    {
        printf("%d\n", (*ptr_i) * (*ptr_i));
    }
    return 0;
}