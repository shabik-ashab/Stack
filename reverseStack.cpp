#include <bits/stdc++.h>
#include"MYSTACK.h"

using namespace std;

void insertAtBottom(Stack<int> &chk, int elem){


    if(chk.empty()){
        chk.push(elem);
        return;
    }

    int topElement = chk.Top();
    chk.pop();

    insertAtBottom(chk,elem);

    chk.push(topElement);
}

void reverseStack(Stack<int> &chk){

    if(chk.empty()){
        return;
    }

    int topElement = chk.Top();
    chk.pop();
    reverseStack(chk);

    insertAtBottom(chk,topElement);

}

int main()
{
    Stack<int> st ;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverseStack(st);

    cout<<st.size();

    while(!st.empty()){
        cout<<st.pop()<<endl;
    }


    return 0;
}