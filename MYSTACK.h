#include <bits/stdc++.h>
using namespace std;

template <typename N>
class Node
{
public:
    N value;
    Node *next;
    Node *prev;

    Node(N val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};

template <typename S>
class Stack
{
    Node <S> *head;
    Node <S> *top;
    int count = 0;

public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }

    // push
    void push(S val)
    {

        Node <S> *newNode = new Node <S> (val);

        // c1:
        if (head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }

        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        count++;
    }

    // pop
    S pop()
    {
        Node <S> *delNode;
        delNode = top;
        S chk;

        // c2:
        if (head == NULL)
        {
            cout << "stack underflow" << endl;
            return chk;
        }

        // c1:
        if (top == head)
        {
            head = top = NULL;
        }
        else
        {
            top = delNode->prev;
            top->next = NULL;
        }

        chk = delNode->value;
        delete delNode;
        count--;
        return chk;
    }
    // empty
    bool empty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }
    // size
    int size()
    {
        return count;
    }
    // top
    S Top()
    {
        S chk;
        if (top == NULL)
        {
            cout << "stack underflow | There is no element in the top" << endl;
            return chk;
        }
        else{
            chk = top->value;
            return chk;
        }
    }

    S mid(){
        int mid = count/2;
        int flag = 1;

        Node<S> *temp;
        temp = head;
        while(flag <= mid){
            temp = temp->next;
            flag++;
        }

        return temp->value;
    }
};
