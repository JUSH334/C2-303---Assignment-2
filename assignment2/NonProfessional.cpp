#include "NonProfessional.h"

#include <iostream>

//Calculates monthly salary
double NonProfessional::weekly_salary() const {
	return get_hourlyRate() * get_hoursWorked();
}

//Calculates health insurance
double NonProfessional::health_insurance() const {
	if (weekly_salary() == 0) {
		cout << "No health contributions applied for current week";
		return 0.0;
	}
	return (0.05 * weekly_salary()); //5% of weekly salary
}

//Calculates vaction days allowed
int NonProfessional::vacation_days() const {
	return (get_hoursWorked() / 30); //1 day per 30 hours worked
}