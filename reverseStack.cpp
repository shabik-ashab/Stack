#include <bits/stdc++.h>
#include"MYSTACK.h"

using namespace std;

void insertAtBottom(Stack <int> &chk, int elem){
    if(chk.empty()){
        chk.push(elem);
    }

    int topElement = chk.Top();
    chk.pop();

    insertAtBottom(chk,elem);
}

void reverseStack(Stack <int> &chk){

    if(chk.empty()){
        return;
    }

    int topElement = chk.Top();
    chk.pop();
    reverseStack(chk);

    insertAtBottom(chk,topElement);

    chk.push(topElement);

}

int main()
{
    Stack<int> st ;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);


    return 0;
}