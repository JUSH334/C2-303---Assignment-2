#ifndef NONPROFESSIONAL_H_
#define NONPROFESSIONAL_H_

#include "Employee.h"


//Derived class NonProfessional
class NonProfessional : public Employee {
private:
	//variables related only to nonprofessionals
	double hourlyRate;
	int hoursWorked;
public:
	NonProfessional(string name, int id, double hourlyRate, int hoursWorked) : Employee(name, id), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

	double weekly_salary() const override;
	double health_insurance() const override;
	int vacation_days() const override;

	//Accesor and Mutator for hourly rate
	double get_hourlyRate() const { return hourlyRate; }
	void set_hourlyRate(double hourlyRate) { this->hourlyRate = hourlyRate; }

	//Accesor and Mutator for hours worked
	double get_hoursWorked() const { return hoursWorked; }
	void set_hoursWorked(double hoursWorked) { this->hoursWorked = hoursWorked; }
};

#endif // !NONPROFESSIONAL_H_

