//Scenario
//Write a program which computes and prints the sum of the days in all four quarters of the current year.Use variables to store these four values.
//
//If you want, you can use the code from the previous lab, but you will learn more if you write it from scratch.
//
//Expected output
//A leap year :
//Days in Q1 of the current year : 91
//Days in Q2 of the current year : 91
//Days in Q3 of the current year : 92
//Days in Q4 of the current year : 92
//
//An ordinary year :
//Days in Q1 of the current year : 90
//Days in Q2 of the current year : 91
//Days in Q3 of the current year : 92
//Days in Q4 of the current year : 92
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
	int CurrentFebruary = 29;
	int daysOfTheMonth[12] = { 31,CurrentFebruary,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 0; i <= 3; i++) {
		int val = i * 3;
		printf("Days in Q%d of the current year: %d\n", i+1, daysOfTheMonth[val] + daysOfTheMonth[val + 1] + daysOfTheMonth[val + 2]);
	}

}

