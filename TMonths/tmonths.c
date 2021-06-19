#include "tmonths.h"
#include <Windows.h>
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
void print_error() {
    printf("========================================\n");
    printf("(~) Введена дата чи місяць невірний!\n");
    printf("(~) Приклад:\n");
    printf("Введіть день та місяць: ");
    Sleep(1000); printf("1"); Sleep(1000); printf("3"); Sleep(1000); printf(" "); Sleep(1000); printf("0"); Sleep(1000); printf("8");
    printf("\nтринадцяте серпня\n");
    printf("========================================\n");
}
