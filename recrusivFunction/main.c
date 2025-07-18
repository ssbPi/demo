/*************************************************************************
 Name:           SSB
 E-mail:         mira_son@mail.ru
 Date:          xx /xx  /2025
 Version:        1.0
*************************************************************************/



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int sum(int k);

int main()
{
    setlocale(LC_ALL, "Russian"); // это новый комментарий


    int result = sum(10);
    printf("%d", result);

    return 0;
}

int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k -1);
    }
    else
    {
        return 0;
    }
}
