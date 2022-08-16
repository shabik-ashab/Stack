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

    Stack(){
        head = NULL;
        top = NULL;
    }

    //push 
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
    int pop(){
        Node* delNode;
        delNode = top;
        int chk = -1;

        //c2:
        if(head == NULL){
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
    int Top(){
        if(top == NULL){
            cout<<"stack underflow | There is no element in the top"<<endl;
            return -1;
        }else return top->value;
    }
};

