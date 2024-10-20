
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    stack<int> dup;
    int n;
    cout<<"Enter no. of element: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        s.push(i);
    }
    //Printing the initial Stack elements before remove mid element
    //creating one temp stack;
    cout<<"Initial Stack: ";
    stack<int> temp=s;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
    //calc middle index
    int mid=n/2 + (n%2==0?-1:0);
    //shifting the real stack to the dup to remove middle
for(int i=0; i<n; i++){
    if(i==mid){
        s.pop();
    }else{
        dup.push(s.top());
        s.pop();
    }
}
//shifting back
while(!dup.empty()){
    s.push(dup.top());
    dup.pop();
}

//printing the vale of stack after deleting middle element
cout<<"After deleting middle element from Stack: ";
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
cout<<endl;

return 0;
    
}
