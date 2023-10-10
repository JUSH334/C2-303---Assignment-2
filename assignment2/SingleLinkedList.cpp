#include "SingleLinkedList.h"
#include <iostream>

using namespace std;

// Constructor
template <typename Item_Type>
Single_Linked_List<Item_Type>::Single_Linked_List() : head(nullptr), tail(nullptr), num_items(0) {}

// Destructor
template <typename Item_Type>
Single_Linked_List<Item_Type>::~Single_Linked_List() {
    while (!empty()) {
        pop_front();
    }
}

// Push an item to the front of the list
template <typename Item_Type>
void Single_Linked_List<Item_Type>::push_front(const Item_Type& item) {
    Node* new_node = new Node(item);
    if (empty()) {
        head = tail = new_node;
    }
    else {
        new_node->next = head;
        head = new_node;
    }
    num_items++;
}

// Push an item to the back of the list
template <typename Item_Type>
void Single_Linked_List<Item_Type>::push_back(const Item_Type& item) {
    Node* new_node = new Node(item);
    if (empty()) {
        head = tail = new_node;
    }
    else {
        tail->next = new_node;
        tail = new_node;
    }
    num_items++;
}

// Pop the front item from the list
template <typename Item_Type>
void Single_Linked_List<Item_Type>::pop_front() {
    if (empty()) {
        cout << "Empty list" << endl;
    }
    else if (num_items == 1) {
        delete head;
        head = tail = nullptr;
        num_items = 0;
    }
    else {
        Node* temp = head;
        head = head->next;
        delete temp;
        num_items--;
    }
}

// Pop the back item from the list
template <typename Item_Type>
void Single_Linked_List<Item_Type>::pop_back() {
    if (empty()) {
        cout << "Empty List" << endl;
    }
    else if (num_items == 1) {
        delete head;
        head = tail = nullptr;
        num_items = 0;
    }
    else {
        Node* current = head;
        while (current->next != tail) {
            current = current->next;
        }
        delete tail;
        tail = current; //set to last index pointed to null
        tail->next = nullptr;
        num_items--;
    }
}

// Return the front item of the list
template <typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::front() const {
    return (empty()) ? Item_Type() : head->data;
}

// Return the back item of the list
template <typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::back() const {
    return (empty()) ? Item_Type() : tail->data;
}

// Check if the list is empty
template <typename Item_Type>
bool Single_Linked_List<Item_Type>::empty() const {
    return num_items == 0;
}

// Insert an item at a specific index in the list
template <typename Item_Type>
void Single_Linked_List<Item_Type>::insert(size_t index, const Item_Type& item) {
    if (index < 0) {
        index = 0;
    }
    if (index >= num_items) {
        push_back(item);
        return;
    }
    Node* new_node = new Node(item);
    if (index == 0) {
        new_node->next = head;
        head = new_node;
    }
    else {
        Node* current = head;
        for (size_t i = 0; i < index - 1; i++) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
    num_items++;
}

// Remove an item at a specific index in the list
template <typename Item_Type>
bool Single_Linked_List<Item_Type>::remove(size_t index) {
    if (index < 0 || index >= num_items) {
        return false;
    }
    if (index == 0) {
        pop_front();
    }
    else {
        Node* current = head;
        for (size_t i = 0; i < index - 1; i++) {
            current = current->next;
        }
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
        if (index == num_items - 1) {
            tail = current;
        }
        num_items--;
    }
    return true;
}

// Finds the index of the first occurrence of an item in the list
//If not found, returns list size
template <typename Item_Type>
size_t Single_Linked_List<Item_Type>::find(const Item_Type& item) const {
    Node* current = head;
    size_t index = 0;
    while (current != NULL) {
        if (current->data == item) {
            return index;
        }
        current = current->next;
        index++;
    }
    return num_items;
}

//displays to screen the current list
template <typename Item_Type>
void Single_Linked_List<Item_Type>::display() const {
    Node* current = head;
    while (current) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "None" << std::endl;
}

// Explicit instantiation of the class for different data types
template class Single_Linked_List<int>;
template class Single_Linked_List<double>;
template class Single_Linked_List<string>;
template class Single_Linked_List<char>;
