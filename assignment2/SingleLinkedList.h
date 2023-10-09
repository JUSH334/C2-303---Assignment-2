#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

//template class -  allows flexiblity of different data types
template <typename Item_Type>
class Single_Linked_List {
private:

    //inner class struct
    struct Node {
        //data field & pointer to node
        Item_Type data;
        Node* next;

        //constructor intializing default values
        Node(const Item_Type& item) : data(item), next(nullptr) {}
    };

    //data members
    Node* head;
    Node* tail;
    size_t num_items;

public:
    //constructor & deconstructor
    Single_Linked_List();
    ~Single_Linked_List();

    //standard list class methods
    void push_front(const Item_Type& item);
    void push_back(const Item_Type& item);
    void pop_front();
    void pop_back();
    Item_Type front() const;
    Item_Type back() const;
    bool empty() const;
    void insert(size_t index, const Item_Type& item);
    bool remove(size_t index);
    size_t find(const Item_Type& item) const;

    //prints the current list to screen
    void display() const;

    //Accesor to the number of items
    size_t get_num_items() { return num_items; }
};

#endif  // SINGLE_LINKED_LIST_H
