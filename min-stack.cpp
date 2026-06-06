class MinStack {
private:
    stack<int> values;
    stack<int> min;
public:
    MinStack() {
        min.push(INT_MAX);
    }
    
    void push(int value) {
        values.push(value);
        if(value <= min.top()){
        min.push(value);
        }
    }
    
    void pop() {
        if(values.top() == min.top()){
            values.pop();
            min.pop();
        }
        else{
        values.pop();
        }
    }
    
    int top() {
        return values.top();
    }
    
    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
