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
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    Node *e = new Node(6);
    Node *f = new Node(7);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    Node *tmp = head;
    bool sorted = true;
    while (tmp->next != NULL)
    {
        if (tmp->val > tmp->next->val)
        {
            sorted = false;
        }
        tmp = tmp->next;
    }

    if (sorted)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}