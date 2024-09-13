/*
	DaysInAMonth.cpp
	Matthew Bersalona
	CSCI 123 C
	09/12/2024
*/

#include <iostream>

using namespace std;

int main() {
	int month, year, days;

	cout << "Enter the month, an integer from 1-12: ";
	cin >> month;
	cout << "Enter the year: ";
	cin >> year; 

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 2:
		days = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	}

	if (month == 2) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				days++;
			}
		}
		else if (year % 4 == 0) {
			days++;
		}
	}

	cout << "There are " << days << " days in that month.";

	return 0;
}