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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void listItemInput(Node *&head, Node *&tail)
{
    int val;
    while (cin >> val)
    {
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
}

void removeDuplicates(Node *&head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        Node *i = tmp;
        while (i->next != NULL)
        {
            if (tmp->val == i->next->val)
            {
                Node *d = i->next;
                i->next = i->next->next;
                delete d;
            }
            else
            {
                i = i->next;
            }
        }
        tmp = tmp->next;
    }
}

void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << ' ';
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    listItemInput(head, tail);
    removeDuplicates(head);
    printLinkedList(head);
    return 0;
}