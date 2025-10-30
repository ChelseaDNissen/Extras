class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;
        for(char a:s){
            //if open paratenesis
            if ( a== '['||a== '('||a=='{')
                mystack.push(a);          
                
            if (a== ']'){
                if (mystack.top()=='[')
                mystack.pop();
                else
                return false;
            }
            if (a== '}'){
                if (mystack.top()=='{')
                mystack.pop();
                else
                return false;
            }
            if (a== ')'){
                if (mystack.top()=='(')
                mystack.pop();
                else
                    return false;
            }

        }
        return true;
    }
};
