class Solution {
public:
    bool isValid(string s) {
	    stack<char> st;
	    for(auto &smb : s)
	    {
		    if(smb == '(' || smb == '[' || smb == '{')
		    {
			    st.push(smb);
			    continue;
		    }
		    else if(st.empty()){
			    return false;
            }
		    else if(smb == '}' && st.top() != '{'){
			    return false;
            }
		    else if(smb == ')' && st.top() != '('){
			    return false;
            }
		    else if(smb == ']' && st.top() != '['){
			    return false;
            }
		    st.pop();
	    }
	    return st.empty();
    }
};