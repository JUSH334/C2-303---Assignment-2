#include "Professional.h"
#include "NonProfessional.h"
#include "Test.h"

#include <iostream>

using namespace std;

//test function for the Professional class
bool testProfessionalClass() {
    Professional profEmployee("John Smith", 101, 5000.0); //instance for professional class

    // Test weekly_salary
    double expectedWeeklySalary = 5000.0 / 4.0; // Monthly salary divided by 4 weeks
    if (profEmployee.weekly_salary() != expectedWeeklySalary) {
        cout << "ProfessionalTest: weekly_salary() failed" << endl;
        return false;
    }

    // Test health_insurance 
    double expectedContributions = 187.5; // Placeholder value
    if (profEmployee.health_insurance() != expectedContributions) {
        cout << "ProfessionalTest: health_insurance() failed" << endl;
        return false;
    }

    // Test vaction_days 
    int expectedVacationDays = 15; // Placeholder value
    if (profEmployee.vacation_days() != expectedVacationDays) {
        cout << "ProfessionalTest: vacation_days() failed" << endl;
        return false;
    }

    return true;
}

// Custom test function for the NonProfessional class
bool testNonProfessionalClass() {
    NonProfessional nonProfEmployee("Alice Johnson", 201, 20.0, 40);

    // Test weekly_salary
    double expectedWeeklySalary = 20.0 * 40; // Hourly rate * hours worked
    if (nonProfEmployee.weekly_salary() != expectedWeeklySalary) {
        cout << "NonprofessionalTest: weekly_salary() failed" << endl;
        return false;
    }

    // Test health_insurance
    double expectedContributions = 40; // Placeholder value
    if (nonProfEmployee.health_insurance() != expectedContributions) {
        cout << "NonprofessionalTest: health_insurance() failed" << endl;
        return false;
    }

    // Test vacation_days 
    int expectedVacationDays = 1; // Placeholder value
    if (nonProfEmployee.vacation_days() != expectedVacationDays) {
        cout << "NonprofessionalTest: vacation_days() failed" << endl;
        return false;
    }

    return true;
}
