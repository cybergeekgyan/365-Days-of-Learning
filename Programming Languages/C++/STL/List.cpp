//List 

#include<iostream>
#include<list>

using namespace std;

bool comparator(int a , int b)
{
    return a<b;     
}

bool even(int k)
{
    return (k % 2 == 0);
}
int main()
{
    list<int> l1;

    list<int> l2;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int key;
        cin>>key;
        if(key & 1)                 //if key is odd     101 & 001   odd no has 1 at least significant bit
            l1.push_back(key);
        else
            l1.push_front(key);
    }

    cout<<l1.front()<<endl;         //print first element
    cout<<l1.back()<<endl;          //print last element

    l1.pop_back();                  //pop last element
    l1.pop_front();                 //pop first element

    for(auto it = l1.begin(); it != l1.end(); it++)
       cout<<*it<<" ";
    cout<<endl;

    l1.remove(7);               //remove all occurences of 7

    l1.remove_if(even);            //calling functoin even

    l1.reverse();               //reverse list

    for(auto it = l1.begin(); it != l1.end(); it++)
       cout<<*it<<" ";
    cout<<endl;

    // l2.swap(l1);            //swap contents of list

    l1.clear();             //clear list

    if(l1.empty())
        cout<<true<<endl;
    else    
        cout<<false<<endl;

    l1.push_back(1);
    l1.push_back(69);
    l1.push_back(96);
    l1.push_back(34);
    l1.push_back(156);

    l2.push_back(10);
    l2.push_back(30);
    l2.push_back(60);
    l2.push_back(90);
    l2.push_back(110);

    for(auto it = l2.begin(); it != l2.end(); it++)
       cout<<*it<<" ";
    cout<<endl;

    // merge

    // l1.merge(l2);             //merge 2 sorted list
    l1.merge(l2,comparator) ;    //sort values even if 2 list are not sorted

    // l1 = l2;                   assign values of l2 to l1

    for(auto it = l1.begin(); it != l1.end(); it++)
       cout<<*it<<" ";
    cout<<endl;

}
