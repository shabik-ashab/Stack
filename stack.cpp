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
};

class Stack{
    Node* head;
    Node* top;
    int count = 0;

public:
    //push
    /*
    push(val)
    {
        1. checking corner case 1 and set top and head directly if true
        2. set newNode on top->next
        3. set top on the latest top
        4. set top on newNode->prev
    }
    */
    // corener case
    //c1: if (head == NULL) we can directly set head and top as newNode
    void push(int val){

        Node* newNode = new Node(val);

        //c1:
        if(head == NULL){
            head = top = newNode;
            count++;
            return;
        }

        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        count++;
    }
    //pop
    
    //corner case
    //c1: if we only have one element
    // if top and head is at the same place we can say we only have one element
    //c2: there is no element in the stack(udnerflow)
    int pop(){
        Node* delNode;
        delNode = top;
        int chk = -1;

        //c2:
        if(head == null){
            cout<<"stack underflow"<<endl;
            return chk;
        }

        //c1:
        if(top == head){
            head = top = NULL;
        }else{
            top = delNode->prev;
            top->next = NULL;
        }

        chk = delNode->value;
        delete delNode;  
        count--; 
        return chk;    
    }
    //empty 
    bool empty(){
        if(head == NULL) return true;
        else return false;
    }
    //size 
    int size(){
        return count;
    }
    //top
    int top(){
        if(top == NULL){
            cout<<"stack underflow | There is no element in the top"<<endl;
            return -1;
        }else return top->value;
    }
};

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