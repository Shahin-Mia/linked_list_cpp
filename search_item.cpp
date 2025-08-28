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

void searchItem(Node *head, int val)
{
    int idx = 0;
    while (head != NULL)
    {
        if (head->val == val)
        {
            cout << idx << endl;
            break;
        }
        head = head->next;
        idx++;
    }
    if (head == NULL)
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        Node *head = NULL;
        Node *tail = NULL;
        listItemInput(head, tail);
        int val;
        cin >> val;
        searchItem(head, val);
    }
    return 0;
}