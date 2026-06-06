class MyQueue {
private:
stack<int> a;
stack<int> b;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        if(b.empty()){
            while(!a.empty()){
                b.push(a.top());
                a.pop();
            }
            int top = b.top();
            b.pop();
            return top;
        }
            int top = b.top();
            b.pop();
            return top;
    }
    
    int peek() {
        if(b.empty()){
            while(!a.empty()){
                b.push(a.top());
                a.pop();
            }
            return b.top();
        }
        return b.top();
    }
    
    bool empty() {
        if(b.empty() && a.empty()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
