#include<iostream>
using namespace std;

class List; // forward declaration

class Node
{
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    friend class List;
};

class List
{
    Node *head;

public:
    List()
    {
        head = NULL;
    }

    void add_first(int data)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }

    void add_last(int data)
    {
        Node *temp = new Node(data);

        if(head == NULL)
        {
            head = temp;
            return;
        }

        Node *ptr = head;
        while(ptr->next != NULL)
            ptr = ptr->next;

        ptr->next = temp;
    }

    void display()
    {
        Node *ptr = head;
        while(ptr != NULL)
        {
            cout << ptr->data << " -> ";
            ptr = ptr->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    List l;

    l.add_first(10);
    l.add_last(20);
    l.add_last(30);

    l.display();

    return 0;
}