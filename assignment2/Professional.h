#ifndef PROFESSIONAL_H_
#define PROFESSIONAL_H_

#include "Employee.h"

//Derived class Professional
class Professional : public Employee {
private:
	//variables related only to professionals
	double monthlySalary;
	int vacationDays = 15;
public:
	//constructor inheritating employee construtor and initalizing
	Professional(string name, int id, int monthlySalary) : Employee(name, id), monthlySalary(monthlySalary) {}

	double weekly_salary() const override;
	double health_insurance() const override;
	int vacation_days() const override;

	//Accessor and Mutator for monthly salary
	double get_monthlySalary() const { return monthlySalary; }
	void set_monthlySalary(double monthlySalary ) { this->monthlySalary = monthlySalary; }

	//Accessor for vacation days
	int get_vactationDays() const { return vacationDays; }
	void set_vacationDays(int vacationDays) { this->vacationDays = vacationDays; }
};

#endif // !PROFESSIONAL_H_
