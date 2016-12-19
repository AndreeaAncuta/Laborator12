#include<iostream>
#include<string.h>
#include<stdlib.h>
#include <vector>
using namespace std;

template <class T>

class Stack
{
private:
    vector<T> data;
public:
    bool empty();
    void push(const T& item)
    {
        data.push_back(item);
    }
    T& top()
    {
        if (data.back()>-1)
        return data.back();
        else cout<<"The stack is empty!";
    }
    void pop()
    {
        data.pop_back();
    }
};

template <class T>
bool Stack<T>::empty()
{
    return data.empty();
}
int main()
{
    Stack<int> x;
    Stack<char> c;
    Stack<double> d;

    x.push(1); x.push(2); x.push(10);
    for(int i=0;i<3;i++)
    {
        cout<<x.top()<<"\n";
        x.pop();
    }
    if(x.empty()==true) cout<<"The stack is now empty!\n";
    else cout<<"The stack still contains integers!\n";

    c.push('a'); c.push('n'); c.push('a');
    cout<<c.top()<<endl;
    c.pop();
    if(c.empty()==true) cout<<"The stack is now empty!\n";
    else cout<<"The stack still contains characters!\n";

    d.push(0.15); d.push(78.02);
    cout<<d.top()<<endl;
    d.pop();
    if(d.empty()==true) cout<<"The stack is now empty!\n";
    else cout<<"The stack still cntains doubles!\n";

    return 0;

}
