#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<Node.h>
#include <iostream>
using namespace std;

class LinkedList
{
public:
    LinkedList()
    {
        tail = head = NULL;
    }

    void Add(int data)
    {
        Node *newNode  = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void display()
    {
        Node *current = head;
        int i = 1;

        if (current == NULL){
            cout<<"Empty List!\n";
            return;
        }

        while(current != NULL)
        {
            cout<<"The index "<< i <<" contains value is: "<<current->data<<"\n";
            current = current->next;
            i++;
        }

    }

    void Delete(int data)
    {
        Node *check = Search(data);
        if (check == tail)
        {
            if(check == head)
            {
                head = tail = NULL;
            }
            else
            {
                tail = check->prev;
                tail->next = NULL;
            }
        }


        else if (check == head)
        {
            if(check == tail)
            {
                head = tail = NULL;
            }
            else
            {
                head=check->next;
                head->prev = NULL;
            }
        }


        else if (check != NULL)
        {
            check->next->prev = check->prev;
            check->prev->next = check->next;
        }

        else
        {
            cout<<"This Data ("<<data<<") Was Not Found!\n";
            return;
        }
        delete check;
    }

    void Count()
    {
        int counter=0;
        Node *current = head;
        while(current != NULL)
        {
            current = current->next;
            counter++;
        }
        cout<<"The Count of the linked list is: "<<counter<<"\n";
    }


    void displayReversly()
    {
        Node *current = tail;
        int i = 1;
        while(current != NULL)
        {
            cout<<"The index "<< i <<" contains value is: "<<current->data<<"\n";
            current = current->prev;
            i++;
        }
    }
    int ValueFromindex(int ind)
    {
        Node *current = head;
        int i = 0;
        while(current != NULL)
        {
            if(i == ind)
                return current->data;
            current = current->next;
            i++;
        }
    }


private:
    Node *head;
    Node *tail;

    Node *Search(int data)
    {
        Node *current = head;
        int i = 1;
        while(current != NULL)
        {
            if (current->data == data)
                return current;
            else
                current = current->next;
            i++;
        }
        return NULL;
    }
};

#endif // LINKEDLIST_H
