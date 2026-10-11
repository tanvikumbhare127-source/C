```c
#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 7; i++)
    {
        for(j = 1; j <= 13; j++)
        {
            if((i == 1 && (j == 4 || j == 10)) ||
               (i == 2 && (j == 3 || j == 5 || j == 9 || j == 11)) ||
               (i == 3 && (j == 2 || j == 6 || j == 8 || j == 12)) ||
               (i >= 3 && i <= 5 && j >= 3 && j <= 11) ||
               (i == 6 && j >= 4 && j <= 10) ||
               (i == 7 && j >= 5 && j <= 9))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
```
