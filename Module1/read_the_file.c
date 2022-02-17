#include <stdio.h>

int main()
{
    int i;
    FILE *fp;
    fp = fopen("data", "r");
    char name[20];
    char surname[20];
    while (fscanf(fp, "%d;%s %s", &i, name, surname) != EOF)
    {
        printf("%s is number %d\n", surname, i);
    }
    return 0;
    fclose(fp);
}