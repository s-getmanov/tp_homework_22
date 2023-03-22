#include <stdio.h>

/*Репозиторий к задаче*/
/*https://github.com/s-getmanov/tp_homework_22.git*/

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
