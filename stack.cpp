#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node* next;
    Node* prev;

    Node(int val){
        value = val;
        next = NULL;
        prev = NULL;
    }
}

class Stack{
    Node* head;
    Node* top;

public:
    //push
    //pop
    //empty 
    //size 
    //top
}

int main()
{
    // Architecture of stack -> last in first out (LIFO)
    // we can create stack with array and linked list
    // operation of stack
    // Top() -> last element is top
    // push -> to insert something in the stack
    // push algorithom
    // s1: top++;
    // s2: insert the value on top
    // pop -> delete last operation in stack
    // pop algorithom
    // s1: delete top value
    // s2: top--;

    // stack using array
    // problem impolemting stack with array 
    /*
    1. overflow
    2. underflow
    3. memory efficiency
    4. we can not expand stack using array 
    */

    /*
    push algorithom O(1)
    corner case:
    c1: if we want to insert something in the array index that doesn't exist
    push(val)
    {
        arr[n]
        // c1:
        if(top == n-1) "stack overflow"
        1. top++;
        2. array[top] = val;
    }
    */

   /*
   pop algotihom O(1)
   //corner case 
   //c1: chek if we have any underflow situtaion 
   pop()
   {
     //c1:
     if(top == -1) "underflow"
     1. delete array[top];
     2. top--;
   }
   */

    // stack using single linked list
    // time complexity of pop for single linked list O(n)
    // time complexity of pop for doubly linked list O(1)

    
    return 0;
}