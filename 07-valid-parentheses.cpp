class Solution {
public:
    bool isValid(string s) {
        std::stack<char> c;
        for(size_t i = 0 ; i < s.size() ; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                c.push(s[i]);
            }
            else{
                if(c.empty()) return false;
                if(s[i] == ')' && c.top() != '('){
                    return false;
                }
                if(s[i] == '}' && c.top() != '{'){
                    return false;
                }
                if(s[i] == ']' && c.top() != '['){
                    return false;
                }
                c.pop();
            }
        }
        return c.empty();
    }
};
