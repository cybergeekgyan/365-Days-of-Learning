// Stack  (Abstract Data Type)
// LIFO

#include<iostream>
#include<stack>

using  namespace std;

void printstack(stack <int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main()
{
   stack <int> s , s1;

    s.push(10);            // Push element in stack
    s.push(89);
    s.push(54);
    s.push(43);
    s.push(89);

    s1.push(34);
    s1.push(87);
    s1.push(23);
    s1.push(40);

    cout<<"Stack Top : "<<s.top()<<endl;    //return stack top

    s.pop();       //pop Top element

    if(s.empty())
        cout<<"empty"<<endl;
    else
        cout<<"Not empty"<<endl;

    s.swap(s1);     //swap;

    cout<<s.top()<<endl;
    cout<<s1.top()<<endl;

    printstack(s);
    cout<<endl;
    printstack(s1);

    return 0;
}

