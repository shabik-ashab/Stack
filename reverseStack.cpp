#include <bits/stdc++.h>
#include"MYSTACK.h"

using namespace std;

void reverseStack(Stack <int> &chk){

    if(chk.empty())

    int topElement = chk.Top();
    chk.pop();
    reverseStack(chk);

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