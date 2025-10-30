#include <iostream>
#include <stack>
using namespace std; 
class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;
          char b;
     for (int i=0; i<s.length(); i++) {
        if (s[i]=='('||s[i]=='['||s[i]=='{') {
            mystack.push(s[i]);
        
        }else if (s[i]== ']'){
                if (i==0||mystack.top()!='[')
                        return false;
                else
                    mystack.pop();
                
            }else if (s[i]== '}'){
                    if (i==0||mystack.top()!='{')
                        return false;
                else
                    mystack.pop();
                }else if (s[i]== ')'){
                    if (i==0||mystack.top()!='(')
                        return false;
                else
                    mystack.pop();
                }

    }
        return mystack.empty();
}
    
};

