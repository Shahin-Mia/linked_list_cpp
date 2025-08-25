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

void listItemInput(int val, Node *&head, Node *&tail)
{
    while (cin >> val)
    {
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
}

void printMaxNumber(Node *head)
{
    int max = 0;
    while (head != NULL)
    {
        if (max < head->val)
        {
            max = head->val;
        }
        head = head->next;
    }
    cout << max << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    listItemInput(val, head, tail);
    printMaxNumber(head);
    return 0;
}