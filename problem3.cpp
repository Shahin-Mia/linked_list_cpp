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
    Node *head = new Node(5);
    Node *a = new Node(4);
    Node *b = new Node(10);
    Node *c = new Node(8);
    Node *d = new Node(2);
    Node *e = new Node(1);
    Node *f = new Node(9);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    int mid = count / 2;
    tmp = head;
    for (int i = 0; i <= mid; i++)
    {
        if (count % 2 == 0)
        {
            if (i == mid || i == mid - 1)
            {
                cout << tmp->val << endl;
            }
        }
        else
        {
            if (i == mid)
            {
                cout << tmp->val << endl;
            }
        }
        tmp = tmp->next;
    }
    return 0;
}