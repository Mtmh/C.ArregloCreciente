#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a, *b, i;
    a = (int *) calloc(5, sizeof(int));

    a[0] = 5;
    a[1] = 7;
    a[2] = 9;
    a[3] = 11;
    a[4] = 13;

    for (i = 0; i < 5; i++)
        printf("%d\n", a[i]);

    b = (int *) calloc(5, sizeof(int));
    for (i = 0; i < 5; ++i)
        b[i] = a[i];

    free(a);
    a = (int *) calloc(10, sizeof(int));
    for (i = 0; i < 5; ++i)
        a[i] = b[i];
    free(b);

    a[5] = 15;
    a[6] = 17;
    a[7] = 19;
    a[8] = 21;
    a[9] = 23;

    printf("\n");

    for (i = 0; i < 10; ++i)
        printf("%d\n", a[i]);
    printf("\n");

    free(a);

    return 0;
}
