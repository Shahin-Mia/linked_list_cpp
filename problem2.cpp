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
    int fre[101] = {0};
    Node *head = new Node(5);
    Node *a = new Node(4);
    Node *b = new Node(8);
    Node *c = new Node(8);
    Node *d = new Node(2);
    Node *e = new Node(1);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node *tmp = head;
    while (tmp != NULL)
    {
        fre[tmp->val]++;
        tmp = tmp->next;
    }
    bool is_duplicate = false;
    for (int i = 0; i < 100; i++)
    {
        if (fre[i] > 1)
        {
            is_duplicate = true;
            break;
        }
    }

    if (is_duplicate)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}