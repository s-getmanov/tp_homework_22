#include <stdio.h>

main()
{
    int a, b;

    printf("Введите первое число:");
    scanf("%i", &a);

    printf("Введите второе число:");
    scanf("%i", &b);

    if (a > b)
    {
        printf("Больше");
    }
    else
    {
        if (a < b)
        {
            printf("Меньше");
        }
        else
        {
            printf("Равны");
        }
    }
}
