#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int sz = sizeof(a) / sizeof(int);

    printf("size: %d\n", sz);
    return 0;
}