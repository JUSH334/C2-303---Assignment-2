#include "Professional.h"
#include <iostream>

//Calculates monthly salary
double Professional::weekly_salary() const {
	return (monthlySalary / 4.0); //assumes 4 weeks in a month
}

//Calculates health insurance
double Professional::health_insurance() const {
	double health_contribution;
	if (weekly_salary() > 1000) {
		health_contribution = weekly_salary() * 0.15; //15% if weekly salary is more than $1000
	}
	else {
		health_contribution = weekly_salary() * 0.10; //10% if weekly salary is less than $1000
	}
	return health_contribution;
}

//Calculates vaction days allowed
int Professional::vacation_days() const {
	//Salary-based workers receive a flat-based amount of 15 vacation days
	//It is on the basis of use-it-or-lose-it

	int temp_days = get_vactationDays();
	if (temp_days == 0) {
		cout << "Out of Vacation Days" << endl;
		return 0;
	}
	else {
		return temp_days;
	}
}