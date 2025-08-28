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

bool compare(Node *head, Node *head1)
{
    while (head != NULL && head1 == NULL)
    {
        if (head1 == NULL || head->val != head1->val)
        {
            return false;
        }
        head = head->next;
        head1 = head1->next;
    }
    return (head == NULL && head1 == NULL);
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

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    listItemInput(head1, tail1);
    listItemInput(head2, tail2);

    if (compare(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}