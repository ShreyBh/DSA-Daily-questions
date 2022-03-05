void solve(stack<int>& s, int x)
    {
        if(s.empty()){
            s.push(x);
            return ;
        }
        
        solve(stack,x);
        s.push(num);
    }
    


stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack,x);
    return myStack;
}