#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>

using namespace std;

class Employee {
private:
	//Common variables
	string name;
	int id;
public:
	//Constructors
	Employee() { name = "None", id = 0; }
	Employee(string name, int id) : name(name), id(id) {}

	//Abstract Method - computes weekly salary
	virtual double weekly_salary() const = 0;

	//Abstract Method - computes health insurance
	virtual double health_insurance() const = 0;

	//Abstract Method - computes vacation days
	virtual int vacation_days() const = 0;

	//Accessor & Mutator for name
	string get_name() const { return name; }
	void set_name(string name) { this->name = name;}

	//Accessor and Mutator for id
	int get_id() const { return id; }
	void set_id(int id) { this->id = id; }

};

#endif // !EMPLOYEE_H_

