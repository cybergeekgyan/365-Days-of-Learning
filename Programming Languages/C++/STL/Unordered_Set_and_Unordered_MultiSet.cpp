// Unordered Set and Unordered Mutliset

#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set <int> s;
    
    // insert
    s.insert(54);           // will be any order // duplicates not allowed
    s.insert(34);
    s.insert(17);
    s.insert(17);
    s.insert(16);
    s.insert(16);
    s.insert(90);
    s.insert(90);

    s.erase(17);

    if(s.find(17) != s.end())
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;
    
    for(auto it = s.begin(); it != s.end(); it++)
        cout<<*it<<" ";             
    cout<<endl;

    unordered_multiset <int> us;

    us.insert(54);           // will be any order  // duplicates allowed
    us.insert(34);
    us.insert(34);
    us.insert(34);
    us.insert(34);
    us.insert(17);
    us.insert(16);
    us.insert(16);
    us.insert(16);
    us.insert(90);

    us.erase(17);

    if(us.find(17) != us.end())
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;

    //s.erase(s.find(16),s.find(90));   segmentation fault     //in unorder we don't use this range

    // we don't use range in unordered multiset and set for deletin we only use single element
    
    // set iterator is read only we cannot asign *it = 10 or any value as it violate the property of set

    for(auto it = us.begin(); it != us.end(); it++)
        cout<<*it<<" ";             
    cout<<endl;
}
