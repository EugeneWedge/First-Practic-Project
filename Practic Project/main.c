
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
#define SizeMonth 12

// Âűâîä äí˙
void print_day();
// Âűâîä ěĺń˙öŕ
void print_month(int day);
// Âűâîä ďđĺäóďđĺćäĺíč˙ îá îřčáęĺ
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
        printf("Âčáĺđłňü îďĺđŕöłţ (w/q): ");
        N = _getch();
        printf("\n");
        switch (N){
        case 'ц': case 'Ц': case 87: case 119:{
            printf("Введіть день та місяць: ");
            scanf_s("%d%d", &day, &month);
            (day <= number_day[month - 1][0] && day >= 1 && month <= 12 && month >= 1) ? print_day(day), print_month(month) : print_error();
            break;
        }
        case 'É': case 'é': case 113: case 81: printf("Đîáîňŕ ďđîăđŕěč çŕâĺđřĺíŕ!\n");  return 0;
        default: printf("(~) Ââĺäĺííŕ ęîěŕíäŕ íĺâłđíŕ!\n"); break;
        }
    }
}

void print_day(int day){
    switch (day){
    case 1: printf("перше "); break;
    case 2: printf("друге "); break;
    case 3: printf("третє "); break;
    case 4: printf("четверте "); break;
    case 5: printf("п'яте "); break;
    case 6: printf("шосте "); break;
    case 7: printf("сьоме "); break;
    case 8: printf("восьме "); break;
    case 9: printf("дев'яте "); break;
    case 10: printf("десяте "); break;
    case 11: printf("одинадцяте "); break;
    case 12: printf("дванадцяте "); break;
    case 13: printf("тринадцяте "); break;
    case 14: printf("чотирнадцяте "); break;
    case 15: printf("п'ятнацяте "); break;
    case 16: printf("шостнадцяте "); break;
    case 17: printf("сімнадцяте "); break;
    case 18: printf("вісімнадцяте "); break;
    case 19: printf("дев'ятнадцяте "); break;
    case 20: printf("двадцяте "); break;
    case 21: printf("двадцять перше "); break;
    case 22: printf("двадцять друге "); break;
    case 23: printf("двадцять третє "); break;
    case 24: printf("двадцять четверте "); break;
    case 25: printf("двадцять п'яте "); break;
    case 26: printf("двадцять шосте "); break;
    case 27: printf("двадцять сьоме "); break;
    case 28: printf("двадцять восьме "); break;
    case 29: printf("двадцять дев'яте "); break;
    case 30: printf("тридцяте "); break;
    case 31: printf("тридцять перше "); break;
    default: printf("(~) Виникла проблема!"); break;
    }
}
void print_month(int month){
    switch (month){
    case 1: printf("січня\n"); break;
    case 2: printf("лютого\n"); break;
    case 3: printf("березня\n"); break;
    case 4: printf("квітня\n"); break;
    case 5: printf("травня\n"); break;
    case 6: printf("червня\n"); break;
    case 7: printf("липня\n"); break;
    case 8: printf("серпня\n"); break;
    case 9: printf("вересня\n"); break;
    case 10: printf("жовтня\n"); break;
    case 11: printf("листопада\n"); break;
    case 12: printf("грудня\n"); break;
    default: printf("(~) Виникла проблема!\n"); break;
    }
}
void print_error() {
    printf("========================================\n");
    printf("(~) Ââĺäĺíŕ äŕňŕ ÷č ěłń˙öü íĺâłđíčé!\n");
    printf("(~) Ďđčęëŕä:\n");
    printf("Ââĺäłňü äĺíü ňŕ ěłń˙öü: ");
    Sleep(1000); printf("1"); Sleep(1000); printf("3"); Sleep(1000); printf(" "); Sleep(1000); printf("0"); Sleep(1000); printf("8");
    printf("\nňđčíŕäö˙ňĺ ńĺđďí˙\n");
    printf("========================================\n");
}
