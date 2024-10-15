#include <iostream>
#include <string>
#include <stack>
using namespace std;
void reverse(string str){
    stack<string> st;
    for(int i=0; i<str.length(); i++){
        string word="";
        while(str[i]!=' ' && i<str.length()){
            word+=str[i];
            i++;
        }
        st.push(word);
    }
    
    //printing the elements of the stack--
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main(){
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    reverse(str);
    return 0;
}
