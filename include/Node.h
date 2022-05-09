#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node(int d) {
            data = d;
            next = prev = NULL;
        }
    int data;
    Node *next;
    Node *prev;
};

#endif // NODE_H
