class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int val;
        stack<int>st;
        for(string ch:tokens)
        {
            if(ch== "+" || ch=="-"|| ch=="/"|| ch=="*")
        {
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            if(ch=="+")
            {
                val=a+b;
            }
            if(ch=="-")
            {
                val=b-a;
            }
            if(ch=="*")
            {
                val=a*b;
            }
            if(ch=="/")
            {
                val=b/a;
            }
            st.push(val);
        }
        else{
            st.push(stoi(ch));
        }
     }
        return st.top();

    }
};