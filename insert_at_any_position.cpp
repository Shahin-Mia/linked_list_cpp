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

bool insertAtAnyPosition(Node *&head, int val, int pos)
{
    Node *newNode = new Node(val);
    Node *tmp = head;

    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        return true;
    }
    else
    {
        for (int i = 1; i < pos; i++)
        {
            if (tmp == NULL)
            {
                break;
            }
            tmp = tmp->next;
        }
        if (tmp != NULL)
        {
            newNode->next = tmp->next;
            tmp->next = newNode;
            return true;
        }
        return false;
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
    int val;
    int q;
    listItemInput(val, head, tail);
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int pos, val;
        cin >> pos >> val;
        bool success = insertAtAnyPosition(head, val, pos);
        if (success)
        {
            printLinkedList(head);
        }
        else
        {
            cout << "INVALID" << endl;
        }
    }
    return 0;
}