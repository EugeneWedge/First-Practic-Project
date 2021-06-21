
/*
Файл: Practic Project.c
Практика
Автор : Комарницький Є.О.
Задание: Разработать программу перевода даты та месяца в словесную форму
Дата создания : 09.06.2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <Windows.h>
#include "..\..\TMonths\tmonths.h"
#define SizeMonth 12

int main()
{
    int number_day[SizeMonth][1] = { {31},{29},{31},{30},{31},{30},{31},{31},{30},{31},{30},{31} }; // Кількість днів в місяці
    setlocale(LC_ALL, "Ukr"); // Підключення української мови
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int day = 0, month = 0;
    char N;
    for (;;) {
        printf("Виберіть операцію (w/q): ");
        N = _getch();
        printf("\n");
        switch (N) {
        case 'ц': case 'Ц': case 87: case 119: {
            printf("Введіть день та місяць: ");
            scanf_s("%d%d", &day, &month);
            (day <= number_day[month - 1][0] && day >= 1 && month <= 12 && month >= 1) ? print_day(day), print_month(month) : print_error(); // Перевірка на кількість днів в місяці так кількість місяців
            break;
        }
        case 'Й': case 'й': case 113: case 81: printf("Робота програми завершена!\n");  return 0;
        default: printf("(~) Введенна команда невірна!\n"); break;
        }
    }
}
