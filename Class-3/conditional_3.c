#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox's Bazar Jabo\n");

        if (tk >= 10000)
        {
            printf("saint martin jabo\n");
        }
        else
        {
            printf("Ferot Chole jabo\n");
        }
    }
    else
    {
        printf("kothao jabo na");
    }
    return 0;
}