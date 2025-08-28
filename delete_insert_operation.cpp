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

void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void deleteAtAnyPosition(Node *&head, Node *&tail, int pos)
{
    Node *tmp = head;

    if (head == NULL)
    {
        return;
    }

    if (pos == 0 && tmp->next != NULL)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }
    else if (pos == 0 && tmp->next == NULL)
    {
        Node *deleteNode = head;
        head = NULL;
        tail = NULL;
        delete deleteNode;
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
        if (tmp != NULL && tmp->next != NULL)
        {
            Node *deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deleteNode;

            if (tmp->next == NULL)
            {
                tail = tmp;
            }
        }
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
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insertAtHead(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else
        {
            deleteAtAnyPosition(head, tail, v);
        }
        printLinkedList(head);
    }
    return 0;
}