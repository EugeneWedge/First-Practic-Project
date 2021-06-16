/*
Ôŕéë: Practic Project.c
Ëĺňí˙˙ ďđŕęňčęŕ
Ŕâňîđ : Ęîěŕđíčöüęčé Ş.Î.
Çŕäŕíčĺ: Đŕçđŕáîňŕňü ďđîăđŕěěó ďĺđĺâîäŕ äŕňű ňŕ ěĺń˙öŕ â ńëîâĺńíóţ ôîđěó
Äŕňŕ ńîçäŕíč˙ : 09.06.2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <windows.h>

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
        switch (N)
        {
        case 'ö': case 'Ö': case 87: case 119: {
            printf("Ââĺäłňü äĺíü ňŕ ěłń˙öü: ");
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
        case 'É': case 'é': case 113: case 81: printf("Đîáîňŕ ďđîăđŕěč çŕâĺđřĺíŕ!\n");  return 0;
        default: printf("(~) Ââĺäĺííŕ ęîěŕíäŕ íĺâłđíŕ!\n"); break;
        }
    }
}


void print_day(int day)
{
    switch (day)
    {
    case 1: printf("ďĺđřĺ "); break;
    case 2: printf("äđóăĺ "); break;
    case 3: printf("ňđĺňş "); break;
    case 4: printf("÷ĺňâĺđňĺ "); break;
    case 5: printf("ď'˙ňĺ "); break;
    case 6: printf("řîńňĺ "); break;
    case 7: printf("ńüîěĺ "); break;
    case 8: printf("âîńüěĺ "); break;
    case 9: printf("äĺâ'˙ňĺ "); break;
    case 10: printf("äĺń˙ňĺ "); break;
    case 11: printf("îäčíŕäö˙ňĺ "); break;
    case 12: printf("äâŕíŕäö˙ňĺ "); break;
    case 13: printf("ňđčíŕäö˙ňĺ "); break;
    case 14: printf("÷îňčđíŕäö˙ňĺ "); break;
    case 15: printf("ď'˙ňíŕö˙ňĺ "); break;
    case 16: printf("řîńňíŕäö˙ňĺ "); break;
    case 17: printf("ńłěíŕäö˙ňĺ "); break;
    case 18: printf("âłńłěíŕäö˙ňĺ "); break;
    case 19: printf("äĺâ'˙ňíŕäö˙ňĺ "); break;
    case 20: printf("äâŕäö˙ňĺ "); break;
    case 21: printf("äâŕäö˙ňü ďĺđřĺ "); break;
    case 22: printf("äâŕäö˙ňü äđóăĺ "); break;
    case 23: printf("äâŕäö˙ňü ňđĺňş "); break;
    case 24: printf("äâŕäö˙ňü ÷ĺňâĺđňĺ "); break;
    case 25: printf("äâŕäö˙ňü ď'˙ňĺ "); break;
    case 26: printf("äâŕäö˙ňü řîńňĺ "); break;
    case 27: printf("äâŕäö˙ňü ńüîěĺ "); break;
    case 28: printf("äâŕäö˙ňü âîńüěĺ "); break;
    case 29: printf("äâŕäö˙ňü äĺâ'˙ňĺ "); break;
    case 30: printf("ňđčäö˙ňĺ "); break;
    case 31: printf("ňđčäö˙ňü ďĺđřĺ "); break;
    default: printf("(~) Âčíčęëŕ ďđîáëĺěŕ!"); break;
    }
}
void print_month(int month)
{
    switch (month)
    {
    case 1: printf("ńł÷í˙\n"); break;
    case 2: printf("ëţňîăî\n"); break;
    case 3: printf("áĺđĺçí˙\n"); break;
    case 4: printf("ęâłňí˙\n"); break;
    case 5: printf("ňđŕâí˙\n"); break;
    case 6: printf("÷ĺđâí˙\n"); break;
    case 7: printf("ëčďí˙\n"); break;
    case 8: printf("ńĺđďí˙\n"); break;
    case 9: printf("âĺđĺńí˙\n"); break;
    case 10: printf("ćîâňí˙\n"); break;
    case 11: printf("ëčńňîďŕäŕ\n"); break;
    case 12: printf("ăđóäí˙\n"); break;
    default: printf("(~) Âčíčęëŕ ďđîáëĺěŕ!\n"); break;
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
