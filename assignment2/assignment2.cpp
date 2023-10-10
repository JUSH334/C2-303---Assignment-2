#include <iostream>
#include "SingleLinkedList.h"
#include "Professional.h"
#include "NonProfessional.h"

using namespace std; 

int main() {
    // An instance of Single Linked List for integers
    Single_Linked_List<int> intList;

    cout << "TESTING SINGLE LINKED LIST WITH INTEGERS: " << endl;

    // Push items to the front
    intList.push_front(1);
    intList.push_front(2);
    intList.push_front(3);

    // Display the list: 3 -> 2 -> 1 -> None
    intList.display();

    // Push items to the back
    intList.push_back(4);
    intList.push_back(5);

    // Display the list: 3 -> 2 -> 1 -> 4 -> 5 -> None
    intList.display();

    // Pop front and back items
    intList.pop_front();  // Remove 3
    intList.pop_back();   // Remove 5

    // Display the list: 2 -> 1 -> 4 -> None
    intList.display();

    // Get front and back items
    int front_item = intList.front(); // Should be 2
    int back_item = intList.back();   // Should be 4

    cout << "Front item: " << front_item << endl;
    cout << "Back item: " << back_item << endl;

    // Check if the list is empty
    bool is_empty = intList.empty(); // Should be false
    cout << "Is the list empty? " << (is_empty ? "Yes" : "No") << endl;

    // Insert an item at index 1 (between 2 and 4)
    intList.insert(1, 99);

    // Display the list: 2 -> 99 -> 1 -> 4 -> None
    intList.display();

    // Find the index of item 1 (should be 2)
    size_t index = intList.find(1);
    cout << "Index of item 1: " << index << endl;

    // Remove item at index 1 (99)
    bool removed = intList.remove(1);

    if (removed) {
        cout << "Item at index 1 (99) removed successfully." << endl;
    }
    else {
        cout << "Item at index 1 (99) not found or removal failed." << endl;
    }

    // Display the updated list: 2 -> 1 -> 4 -> None
    intList.display();


    // An instance of Single Linked List for strings
    Single_Linked_List<string> stringList;

    cout << endl;
    cout << endl;

    cout << "TESTING SINGLE LINKED LIST WITH STRINGS" << endl;

    // Push items to the front
    stringList.push_front("World");
    stringList.push_front("Hello");

    // Display the list: Hello -> World -> None
    stringList.display();

    // Push items to the back
    stringList.push_back("!");
    stringList.push_back("Goodbye");

    // Display the list: Hello -> World -> ! -> Goodbye -> None
    stringList.display();

    // Pop front and back items
    stringList.pop_front();  // Remove "Hello"
    stringList.pop_back();   // Remove "Goodbye"

    // Display the list: World -> ! -> None
    stringList.display();

    // Get front and back items
    string front_item_string = stringList.front(); // Should be "World"
    string back_item_string = stringList.back();   // Should be "!"

    cout << "Front item: " << front_item_string << endl;
    cout << "Back item: " << back_item_string << endl;

    // Check if the list is empty
    bool is_empty_string = stringList.empty(); // Should be false
    cout << "Is the list empty? " << (is_empty_string ? "Yes" : "No") << endl;

    // Insert an item at index 1 ("Hello" between "World" and "!")
    stringList.insert(1, "Hello");

    // Display the list: World -> Hello -> ! -> None
    stringList.display();

    // Find the index of item "!"
    size_t index_string = stringList.find("!");
    cout << "Index of item '!': " << index_string << endl;

    // Remove item at index 1 ("Hello")
    bool removed_string = stringList.remove(1);

    if (removed_string) {
        cout << "Item at index 1 ('Hello') removed successfully." << endl;
    }
    else {
        cout << "Item at index 1 ('Hello') not found or removal failed." << endl;
    }

    // Display the updated list: World -> ! -> None
    stringList.display();

    cout << endl;
    cout << endl;

    //An instance of Single Linked List for doubles
    Single_Linked_List<double> doubleList;

    cout << "TESTING SINGLE LINKED LIST WITH DOUBLES" << endl;

    // Push items to the front
    doubleList.push_front(3.14);
    doubleList.push_front(2.71);

    // Display the list: 2.71 -> 3.14 -> None
    doubleList.display();

    // Push items to the back
    doubleList.push_back(1.618);
    doubleList.push_back(0.123);

    // Display the list: 2.71 -> 3.14 -> 1.618 -> 0.123 -> None
    doubleList.display();

    // Pop front and back items
    doubleList.pop_front();  // Remove 2.71
    doubleList.pop_back();   // Remove 0.123

    // Display the list: 3.14 -> 1.618 -> None
    doubleList.display();

    // Get front and back items
    double front_item_double = doubleList.front(); // Should be 3.14
    double back_item_double = doubleList.back();   // Should be 1.618

    cout << "Front item: " << front_item_double << endl;
    cout << "Back item: " << back_item_double << endl;

    // Check if the list is empty
    bool is_empty_double = doubleList.empty(); // Should be false
    cout << "Is the list empty? " << (is_empty_double ? "Yes" : "No") << endl;

    // Insert an item at index 1 (between 3.14 and 1.618)
    doubleList.insert(1, 2.0);

    // Display the list: 3.14 -> 2.0 -> 1.618 -> None
    doubleList.display();

    // Find the index of item 1.618
    size_t index_double = doubleList.find(1.618);
    cout << "Index of item 1.618: " << index_double << endl;

    // Remove item at index 1 (2.0)
    bool removed_double = doubleList.remove(1);

    if (removed_double) {
        cout << "Item at index 1 (2.0) removed successfully." << endl;
    }
    else {
        cout << "Item at index 1 (2.0) not found or removal failed." << endl;
    }

    // Display the updated list: 3.14 -> 1.618 -> None
    doubleList.display();

    cout << endl;
    cout << endl;

    // An instance of Single Linked List for characters
    Single_Linked_List<char> charList;

    cout << "TESTING SINGLE LINKED LIST WITH CHARACTERS" << endl;

    // Push items to the front
    charList.push_front('C');
    charList.push_front('B');
    charList.push_front('A');

    // Display the list: A -> B -> C -> None
    charList.display();

    // Push items to the back
    charList.push_back('D');
    charList.push_back('E');

    // Display the list: A -> B -> C -> D -> E -> None
    charList.display();

    // Pop front and back items
    charList.pop_front();  // Remove 'A'
    charList.pop_back();   // Remove 'E'

    // Display the list: B -> C -> D -> None
    charList.display();

    // Get front and back items
    char front_item_char = charList.front(); // Should be 'B'
    char back_item_char = charList.back();   // Should be 'D'

    cout << "Front item: " << front_item_char << endl;
    cout << "Back item: " << back_item_char << endl;

    // Check if the list is empty
    bool is_empty_char = charList.empty(); // Should be false
    cout << "Is the list empty? " << (is_empty_char ? "Yes" : "No") << endl;

    // Insert an item at index 1 ('C' between 'B' and 'D')
    charList.insert(1, 'C');

    // Display the list: B -> C -> C -> D -> None
    charList.display();

    // Find the index of item 'D'
    size_t index_char = charList.find('D');
    cout << "Index of item 'D': " << index_char << endl;

    // Remove item at index 1 ('C')
    bool removed_char = charList.remove(1);

    if (removed_char) {
        cout << "Item at index 1 ('C') removed successfully." << endl;
    }
    else {
        cout << "Item at index 1 ('C') not found or removal failed." << endl;
    }

    // Display the updated list: B -> C -> D -> None
    charList.display();

    cout << endl;
    cout << endl;

    //INSTANCES FOR PROFESSIONAL AND NON-PROFESSIONAL DERIVED CLASSES
    cout << "TESTING THE CLASSES" << endl;

    Professional profEmployee("John Smith", 101, 5000.0); // Monthly salary of $5000
    NonProfessional nonProfEmployee("Alice Johnson", 201, 20.0, 40); // Hourly rate of $20, worked 40 hours

    // Test the classes by calculating and displaying weekly salary, health care contributions, and vacation days
    cout << "Professional Employee:" << endl;
    cout << "Weekly Salary: $" << profEmployee.weekly_salary() << endl;
    cout << "Health Care Contributions: $" << profEmployee.health_insurance() << endl;
    cout << "Vacation Days Earned: " << profEmployee.vacation_days() << " days" << endl;

    cout << "\nNonprofessional Employee:" << endl;
    cout << "Weekly Salary: $" << nonProfEmployee.weekly_salary() << endl;
    cout << "Health Care Contributions: $" << nonProfEmployee.health_insurance() << endl;
    cout << "Vacation Days Earned: " << nonProfEmployee.vacation_days() << " days" << endl;

    return 0;
}

