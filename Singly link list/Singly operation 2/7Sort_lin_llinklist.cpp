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

void print_linklst(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
void insert_at_tail(Node * & head, Node * &tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail=newnode;
        return;
    }

    tail->next  = newnode;
    tail=tail->next;
}

void sort_linklist(Node * head)
{
    for (Node * i=head;i->next!=NULL;i=i->next)
    {     
    for (Node * j=i->next;j!=NULL;j=j->next)
    {
        if (i->val>j->val)
        {
            swap(i->val,j->val);
        }
    }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    sort_linklist(head);
    print_linklst(head);
    return 0;
}