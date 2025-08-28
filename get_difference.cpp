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

void printDifference(Node *&head)
{
    int min = INT_MAX;
    int max = INT_MIN;
    while (head != NULL)
    {
        if (min > head->val)
        {
            min = head->val;
        }
        if (max < head->val)
        {
            max = head->val;
        }
        head = head->next;
    }
    cout << max - min;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    listItemInput(head, tail);
    printDifference(head);
    return 0;
}