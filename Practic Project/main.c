
/*
����: Practic Project.c
��������
����� : ������������ �.�.
�������: ����������� ��������� �������� ���� �� ������ � ��������� �����
���� �������� : 09.06.2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <Windows.h>
#define SizeMonth 12

// ����� ���
void print_day();
// ����� ������
void print_month(int day);
// ����� �������������� �� ������
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
        printf("������� �������� (w/q): ");
        N = _getch();
        printf("\n");
        switch (N){
        case '�': case '�': case 87: case 119:{
            printf("������ ���� �� �����: ");
            scanf_s("%d%d", &day, &month);
            (day <= number_day[month - 1][0] && day >= 1 && month <= 12 && month >= 1) ? print_day(day), print_month(month) : print_error();
            break;
        }
        case '�': case '�': case 113: case 81: printf("������ �������� ���������!\n");  return 0;
        default: printf("(~) �������� ������� ������!\n"); break;
        }
    }
}

void print_day(int day){
    switch (day){
    case 1: printf("����� "); break;
    case 2: printf("����� "); break;
    case 3: printf("���� "); break;
    case 4: printf("�������� "); break;
    case 5: printf("�'��� "); break;
    case 6: printf("����� "); break;
    case 7: printf("����� "); break;
    case 8: printf("������ "); break;
    case 9: printf("���'��� "); break;
    case 10: printf("������ "); break;
    case 11: printf("���������� "); break;
    case 12: printf("���������� "); break;
    case 13: printf("���������� "); break;
    case 14: printf("������������ "); break;
    case 15: printf("�'�������� "); break;
    case 16: printf("����������� "); break;
    case 17: printf("��������� "); break;
    case 18: printf("���������� "); break;
    case 19: printf("���'��������� "); break;
    case 20: printf("�������� "); break;
    case 21: printf("�������� ����� "); break;
    case 22: printf("�������� ����� "); break;
    case 23: printf("�������� ���� "); break;
    case 24: printf("�������� �������� "); break;
    case 25: printf("�������� �'��� "); break;
    case 26: printf("�������� ����� "); break;
    case 27: printf("�������� ����� "); break;
    case 28: printf("�������� ������ "); break;
    case 29: printf("�������� ���'��� "); break;
    case 30: printf("�������� "); break;
    case 31: printf("�������� ����� "); break;
    default: printf("(~) ������� ��������!"); break;
    }
}
void print_month(int month){
    switch (month){
    case 1: printf("����\n"); break;
    case 2: printf("������\n"); break;
    case 3: printf("�������\n"); break;
    case 4: printf("�����\n"); break;
    case 5: printf("������\n"); break;
    case 6: printf("������\n"); break;
    case 7: printf("�����\n"); break;
    case 8: printf("������\n"); break;
    case 9: printf("�������\n"); break;
    case 10: printf("������\n"); break;
    case 11: printf("���������\n"); break;
    case 12: printf("������\n"); break;
    default: printf("(~) ������� ��������!\n"); break;
    }
}
void print_error() {
    printf("========================================\n");
    printf("(~) ������� ���� �� ����� �������!\n");
    printf("(~) �������:\n");
    printf("������ ���� �� �����: ");
    Sleep(1000); printf("1"); Sleep(1000); printf("3"); Sleep(1000); printf(" "); Sleep(1000); printf("0"); Sleep(1000); printf("8");
    printf("\n���������� ������\n");
    printf("========================================\n");
}