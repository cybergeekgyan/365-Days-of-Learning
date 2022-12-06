//Functors

// Objects that are treated as function or function pointers

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class increment{
private:
    int num;
public:
    increment(int x)
    {
        num = x;
    }
    // overload

    int operator () (int add_n)
    {
        return num + add_n;
    }
};

class add{
    public:
        int operator() (int m, int n)
        {
            return m+n;
        }
           
};

int main()
{
    vector <int> v{3,43,56,45,56,4,6} , v1{3,1,23,56,32,67,0};
    int n;
    cin>>n;

    for(auto it = v.begin() ; it != v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    // add given value to each element
    transform(v.begin(),v.end(), v.begin(), increment(n));      //begin_add end_address_where_want_to_keep_resutl_begin_ptr  increment(n)
    // increment is class

    for(auto it = v.begin() ; it != v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    transform(v.begin(),v.end(),v1.begin(),v.begin(),add());

    for(auto it = v.begin() ; it != v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    return 0;
}
