/*
‘айл: Practic Project.c
Ћетн€€ практика
јвтор :  омарницький ™.ќ.
«адание: –азработать программу перевода даты та мес€ца в словесную форму
ƒата создани€ : 09.06.2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <windows.h>

#define SizeMonth 12

// ¬ывод дн€
void print_day();
// ¬ывод мес€ца
void print_month(int day);
// ¬ывод предупреждени€ об ошибке
void print_error();

int main(void)
{
    int number_day[SizeMonth][1] = { {31},{29},{31},{30},{31},{30},{31},{31},{30},{31},{30},{31} };
    setlocale(LC_ALL, "Ukr");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int day = 0, month = 0;
    char N;
    for (;;) {
        printf("¬ибер≥ть операц≥ю (w/q): ");
        N = _getch();
        printf("\n");
        switch (N)
        {
        case 'ц': case '÷': case 87: case 119: {
            printf("¬вед≥ть день та м≥с€ць: ");
            scanf_s("%d%d", &day, &month);
            if (day <= number_day[month - 1][0] && day >= 1 && month <= 12 && month >= 1) {
                print_day(day);
                print_month(month);
            }
            else {
                print_error();
            }
            break;
        }
        case '…': case 'й': case 113: case 81: printf("–обота програми завершена!\n");  return 0;
        default: printf("(~) ¬веденна команда нев≥рна!\n"); break;
        }
    }
}


void print_day(int day)
{
    switch (day)
    {
    case 1: printf("перше "); break;
    case 2: printf("друге "); break;
    case 3: printf("третЇ "); break;
    case 4: printf("четверте "); break;
    case 5: printf("п'€те "); break;
    case 6: printf("шосте "); break;
    case 7: printf("сьоме "); break;
    case 8: printf("восьме "); break;
    case 9: printf("дев'€те "); break;
    case 10: printf("дес€те "); break;
    case 11: printf("одинадц€те "); break;
    case 12: printf("дванадц€те "); break;
    case 13: printf("тринадц€те "); break;
    case 14: printf("чотирнадц€те "); break;
    case 15: printf("п'€тнац€те "); break;
    case 16: printf("шостнадц€те "); break;
    case 17: printf("с≥мнадц€те "); break;
    case 18: printf("в≥с≥мнадц€те "); break;
    case 19: printf("дев'€тнадц€те "); break;
    case 20: printf("двадц€те "); break;
    case 21: printf("двадц€ть перше "); break;
    case 22: printf("двадц€ть друге "); break;
    case 23: printf("двадц€ть третЇ "); break;
    case 24: printf("двадц€ть четверте "); break;
    case 25: printf("двадц€ть п'€те "); break;
    case 26: printf("двадц€ть шосте "); break;
    case 27: printf("двадц€ть сьоме "); break;
    case 28: printf("двадц€ть восьме "); break;
    case 29: printf("двадц€ть дев'€те "); break;
    case 30: printf("тридц€те "); break;
    case 31: printf("тридц€ть перше "); break;
    default: printf("(~) ¬иникла проблема!"); break;
    }
}
void print_month(int month)
{
    switch (month)
    {
    case 1: printf("с≥чн€\n"); break;
    case 2: printf("лютого\n"); break;
    case 3: printf("березн€\n"); break;
    case 4: printf("кв≥тн€\n"); break;
    case 5: printf("травн€\n"); break;
    case 6: printf("червн€\m"); break;
    case 7: printf("липн€\n"); break;
    case 8: printf("серпн€\n"); break;
    case 9: printf("вересн€\n"); break;
    case 10: printf("жовтн€\n"); break;
    case 11: printf("листопада\n"); break;
    case 12: printf("грудн€\n"); break;
    default: printf("(~) ¬иникла проблема!\n"); break;
    }
}


void print_error() {
    printf("========================================\n");
    printf("(~) ¬ведена дата чи м≥с€ць нев≥рний!\n");
    printf("(~) ѕриклад:\n");
    printf("¬вед≥ть день та м≥с€ць: ");
    Sleep(1000); printf("1"); Sleep(1000); printf("3"); Sleep(1000); printf(" "); Sleep(1000); printf("0"); Sleep(1000); printf("8");
    printf("\nтринадц€те серпн€\n");
    printf("========================================\n");
}