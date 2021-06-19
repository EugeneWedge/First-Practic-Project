#include "..\..\TMonths\tmonths.h"
#include <stdio.h>
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// ARRANGE
	int input_day, input_month;
	int expected_output_day = 0, expected_output_month = 0;
	int obteined_output_day, obteined_output_month;
	// ACT
	for (input_day = 1; input_day <= 31; input_day++) {
		for (input_month = 1; input_month <= 12; input_month++) {
			obteined_output_day = print_day(input_day);
			obteined_output_month = print_month(input_month);
			if (obteined_output_day == 1 || obteined_output_month == 1) {
				break;
			}
		}
		if (input_day != 31 || input_month != 12) {
			break;
		}
	}
	// ASSERT
	if (expected_output_day != obteined_output_day) {
		printf("\t\t\t========== TEST DAY FAILED: Doesn't for work %d Expected %d, obtained %d ==========\n", input_month, expected_output_day, obteined_output_day);
	}
	else
		printf("\t\t\t========== TEST SUCCEEDED ==========\n");
	if (expected_output_month != obteined_output_month) {
		printf("\t\t\t========== TEST MONTH FAILED: Doesn't for work %d Expected %d, obtained %d ==========\n", input_month, expected_output_month, obteined_output_month);
	}
	else
		printf("\t\t\t========== TEST SUCCEEDED ==========\n");
	return 0;
}