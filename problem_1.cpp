#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(2);
    Node *a = new Node(1);
    Node *b = new Node(5);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(8);
    Node *f = new Node(9);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    Node *tmp = head;
    int size = 0;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
        size++;
    }
    cout << "size of linkedlist ->" << size << endl;
    return 0;
}