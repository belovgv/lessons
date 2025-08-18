#include <stdio.h>

int main()
{
    int h, m; // часы и минуты

    scanf("%d %d", &h, &m); // считываем входные данные

    int total_minutes = h * 60 + m; // переводим часы в минуты и складываем с минутами
    int total_seconds = total_minutes * 60; // переводим минуты в секунды

    printf("%d\n", total_minutes); // выводим общее количество минут
    printf("%d\n", total_seconds); // выводим общее количество секунд

    return 0;
}
   