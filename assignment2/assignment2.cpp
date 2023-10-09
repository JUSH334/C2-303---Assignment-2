#include <iostream>
#include "SingleLinkedList.h"
#include "Professional.h"
#include "NonProfessional.h"
#include "Functions.h"

using namespace std;

int main() {
    //variables for loop
    bool run = true;
    int userChoice;

    //While loop and Switch case to test methods of single linked list
    cout << "TESTING SINGLE LINKED LIST METHODS" << endl;

    Single_Linked_List<int> my_list;

    while (run == true) {
        displayMenu();
        userChoice = userMenuOption();

        switch (userChoice) {
        case 1:
            int user_number1;
            cout << "Enter a Number: " << endl;
            cin >> user_number1;
            my_list.push_front(user_number1);
            my_list.display();
            break;
        case 2:
            int user_number2;
            cout << "Enter a Number: " << endl;
            cin >> user_number2;
            my_list.push_back(user_number2);
            my_list.display();
            break;
        case 3:
            my_list.pop_front();
            my_list.display();
            break;
        case 4:
            my_list.pop_back();
            my_list.display();
            break;
        case 5:
            cout << "Front: " << my_list.front() << endl;
            break;
        case 6:
            cout << "Back: " << my_list.back() << endl;
            break;
        case 7:
            cout << "Is list empty? " << endl;
            if (my_list.empty()) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
            break;
        case 8:
            int user_number3;
            int user_index1;
            cout << "Enter a Number: " << endl;
            cin >> user_number3;
            cout << "Enter an Index " << endl;
            cin >> user_index1;
            my_list.insert(user_index1, user_number3);
            my_list.display();
            break;
        case 9:
            int user_index2;
            cout << "Enter an Index " << endl;
            cin >> user_index2;
            my_list.remove(user_index2);
            my_list.display();
            break;
        case 10:
            int user_number4;
            cout << "Enter a Number" << endl;
            cin >> user_number4;
            if (my_list.find(user_number4) == my_list.get_num_items()) {
                cout << "Position not found." << endl;
                cout << "List size: " << my_list.find(user_number4) << endl;
            }
            else {
                cout << "Position: " << my_list.find(user_number4) << endl;
            }
            break;
        case 11:
            cout << endl;
            cout << "Quitting program..." << endl;
            run = false;
            break;
        default:
            cout << "Error Occured. Please try again.";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    cout << endl;
    cout << endl;

    //INSTANCES FOR PROFESSIONAL AND NON-PROFESSIONAL DERIVED CLASSES
    cout << "TESTING THE CLASSES" << endl;

    // Create instances of Professional and Nonprofessional employees
    Professional profEmployee("John Smith", 101, 5000.0); // Monthly salary of $5000
    NonProfessional nonProfEmployee("Alice Johnson", 201, 20.0, 40); // Hourly rate of $20, worked 40 hours

    // Testing the classes by calculating and displaying weekly salary, health care contributions, and vacation days
    cout << "Professional Employee: " << profEmployee.get_name() << endl;
    cout << "Weekly Salary: $" << profEmployee.weekly_salary() << endl;
    cout << "Health Care Contributions: $" << profEmployee.health_insurance() << endl;
    cout << "Vacation Days Earned: " << profEmployee.vacation_days() << " days" << endl;

    cout << "\nNonprofessional Employee: " << nonProfEmployee.get_name() << endl;
    cout << "Weekly Salary: $" << nonProfEmployee.weekly_salary() << endl;
    cout << "Health Care Contributions: $" << nonProfEmployee.health_insurance() << endl;
    cout << "Vacation Days Earned: " << nonProfEmployee.vacation_days() << " days" << endl;

    return 0;
}
