
// even and odd number print

#include <stdio.h>
int main()
{
    int i;
    int n;
    scanf("%d,", &n);
    for (i = 1; i <= n; i += 1)
    {
        if (i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else
        {
            printf("%d No\n", i);
        }
    }
    return 0;
}