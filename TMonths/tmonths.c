#include "tmonths.h"
#include <Windows.h>
#pragma warning(disable : 4996)
// Функция вивода дня українською мовою в консоль
int print_day(int day) {
    switch (day) {
    case 1: printf("перше "); return 0; break;
    case 2: printf("друге "); return 0; break;
    case 3: printf("третє "); return 0; break;
    case 4: printf("четверте "); return 0; break;
    case 5: printf("п'яте "); return 0; break;
    case 6: printf("шосте "); return 0; break;
    case 7: printf("сьоме "); return 0; break;
    case 8: printf("восьме "); return 0; break;
    case 9: printf("дев'яте "); return 0; break;
    case 10: printf("десяте "); return 0; break;
    case 11: printf("одинадцяте "); return 0; break;
    case 12: printf("дванадцяте "); return 0; break;
    case 13: printf("тринадцяте "); return 0; break;
    case 14: printf("чотирнадцяте "); return 0; break;
    case 15: printf("п'ятнацяте "); return 0; break;
    case 16: printf("шостнадцяте "); return 0; break;
    case 17: printf("сімнадцяте "); return 0; break;
    case 18: printf("вісімнадцяте "); return 0; break;
    case 19: printf("дев'ятнадцяте "); return 0; break;
    case 20: printf("двадцяте "); return 0; break;
    case 21: printf("двадцять перше "); return 0; break;
    case 22: printf("двадцять друге "); return 0; break;
    case 23: printf("двадцять третє "); return 0; break;
    case 24: printf("двадцять четверте "); return 0; break;
    case 25: printf("двадцять п'яте "); return 0; break;
    case 26: printf("двадцять шосте "); return 0; break;
    case 27: printf("двадцять сьоме "); return 0; break;
    case 28: printf("двадцять восьме "); return 0; break;
    case 29: printf("двадцять дев'яте "); return 0; break;
    case 30: printf("тридцяте "); return 0; break;
    case 31: printf("тридцять перше "); return 0; break;
    default: printf("(~) Виникла проблема!"); return 1; break;
    }
}
// Функция вивода місяця українською мовою в консоль
int print_month(int month) {
    switch (month) {
    case 1: printf("січня\n"); return 0; break;
    case 2: printf("лютого\n"); return 0; break;
    case 3: printf("березня\n"); return 0; break;
    case 4: printf("квітня\n"); return 0; break;
    case 5: printf("травня\n"); return 0; break;
    case 6: printf("червня\n"); return 0; break;
    case 7: printf("липня\n"); return 0; break;
    case 8: printf("серпня\n"); return 0; break;
    case 9: printf("вересня\n"); return 0; break;
    case 10: printf("жовтня\n"); return 0; break;
    case 11: printf("листопада\n"); return 0; break;
    case 12: printf("грудня\n"); return 0; break;
    default: printf("(~) Виникла проблема!\n"); return 1; break;
    }
}
// Функция конвертації дня типу int в день типу char українською мовою  | Параметри 1 - передаємо день числом, 2 - передаємо тип char куди буде записана конвертація
int convert_day(int day, char* days)
{
    switch (day) {
    case 1: strcpy(days, "перше"); return 0; break;
    case 2: strcpy(days, "друге"); return 0; break;
    case 3: strcpy(days, "третє"); return 0; break;
    case 4: strcpy(days, "четверте"); return 0; break;
    case 5: strcpy(days, "п'яте"); return 0; break;
    case 6: strcpy(days, "шосте"); return 0; break;
    case 7: strcpy(days, "сьоме"); return 0; break;
    case 8: strcpy(days, "восьме"); return 0; break;
    case 9: strcpy(days, "дев'яте"); return 0; break;
    case 10: strcpy(days, "десяте"); return 0; break;
    case 11: strcpy(days, "одинадцяте"); return 0; break;
    case 12: strcpy(days, "дванадцяте"); return 0; break;
    case 13: strcpy(days, "тринадцяте"); return 0; break;
    case 14: strcpy(days, "чотирнадцяте"); return 0; break;
    case 15: strcpy(days, "п'ятнадцяте"); return 0; break;
    case 16: strcpy(days, "шістнадцяте"); return 0; break;
    case 17: strcpy(days, "сімнадцяте"); return 0; break;
    case 18: strcpy(days, "вісімнадцяте"); return 0; break;
    case 19: strcpy(days, "дев'ятнадцяте"); return 0; break;
    case 20: strcpy(days, "двадцяте"); return 0; break;
    case 21: strcpy(days, "двадцять перше"); return 0; break;
    case 22: strcpy(days, "двадцять друге"); return 0; break;
    case 23: strcpy(days, "двадцять третє"); return 0; break;
    case 24: strcpy(days, "двадцять четверте"); return 0; break;
    case 25: strcpy(days, "двадцять п'яте"); return 0; break;
    case 26: strcpy(days, "двадцять шосте"); return 0; break;
    case 27: strcpy(days, "двадцять сьоме"); return 0; break;
    case 28: strcpy(days, "двадцять восьме"); return 0; break;
    case 29: strcpy(days, "двадцять дев'яте"); return 0; break;
    case 30: strcpy(days, "тридцяте"); return 0; break;
    case 31: strcpy(days, "тридцять перше"); return 0; break;
    default: printf("(~) Виникла проблема!"); return 1; break;
    }
}
// Функция конвертації місяця типу int в місяць типу char українською мовою | Параметри 1 - передаємо місяць числом, 2 - передаємо тип char куди буде записана конвертація
int convert_month(int month, char* months)
{
    switch (month) {
    case 1: strcpy(months, "січня"); return 0; break;
    case 2: strcpy(months, "лютого"); return 0; break;
    case 3: strcpy(months, "березня"); return 0; break;
    case 4: strcpy(months, "квітня"); return 0; break;
    case 5: strcpy(months, "травня"); return 0; break;
    case 6: strcpy(months, "червня"); return 0; break;
    case 7: strcpy(months, "липня"); return 0; break;
    case 8: strcpy(months, "серпня"); return 0; break;
    case 9: strcpy(months, "вересня"); return 0; break;
    case 10: strcpy(months, "жовтня"); return 0; break;
    case 11: strcpy(months, "листопада"); return 0; break;
    case 12: strcpy(months, "грудня"); return 0; break;
    default: printf("(~) Виникла проблема!"); return 1; break;
    }
}
