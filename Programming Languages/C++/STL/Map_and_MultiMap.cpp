// Map & Multimap (ordered & unordered)

// key value : pair

// Ordered Map is Implemented by balanced BST (hashing ordering is done only on keys)

// keys are in Sorted Order

// Unordered Map is Implemented by Hashing

// keys are in any order

// Maps has unique keys means keys cannot be duplicated/repeated though its key value can be overwrite

// Time Complexity O(logn) in ordered as implemented by BST , O(1) in unordered as implemented by hashing

// Multimap we can store two keys also keys can be repeated unlike map

// Ordered Multimpap (BST) Unordered Multimpap (Hashing) 

// Ordered Multimap (Sorted Keys)  Unordered Multimap (Keys can be any order)

#include<iostream>
#include<map>
using namespace std;

int main()
{
    map <int, int> m;
    // insert -> inserts a new key value pair
    m.insert({10,3});               // pair using curly braces
    m.insert(make_pair(4,23));      // pair using make_pair
   
    m.insert({10,3});       //cannot have duplicates

    m[10] = 6;              //value can be overwrite using index;
    
    m[11] = 7;              //we can also insert using indexing

    // insert key will not let us insert any value corresponding to a old key

    // find  searches for given value in map
    // return an iterator to that place if found otherwise to end and iterator is pointing to a pair
    if(m.find(4) != m.end())
        cout<<"found"<<" "<<m[10]<<" "<<m.find(10)->second<<endl;    //both wil give same value
    else
        cout<<"Not found"<<endl;
    
    // printing
    for(auto it = m.begin(); it != m.end(); it++)
        cout<<it->first<<" "<<(*it).second<<endl;        // -> it is pointer therfore we use arrow operator
    cout<<endl;

    // erase  delete an element or set of elements from map
    m.erase(10);

    // Ordered Map we can delete in range also
    m.erase(m.find(4),m.find(11));

    // printing
    for(auto it = m.begin(); it != m.end(); it++)
        cout<<it->first<<" "<<(*it).second<<endl;        // -> it is pointer therfore we use arrow operator
    cout<<endl;

    //If we tries to print a Index/key that doesn't Exist it will not segmentation fault but 0
    cout<<"m[100] "<<m[100]<<endl;  // it also insert 100 though

    for(auto it = m.begin(); it != m.end(); it++)
        cout<<it->first<<" "<<(*it).second<<endl;        // -> it is pointer therfore we use arrow operator
    cout<<endl;

cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
       
    multimap<int,int> m1;    
    //multimap doesn't provide subscript order therefore we can't use it

     // insert -> inserts a new key value pair
    m1.insert({10,3});               // pair using curly braces
    m1.insert(make_pair(64,23));      // pair using make_pair
    m1.insert(make_pair(8,53));      
    m1.insert(make_pair(19,27));      
   
    m1.insert({10,3});               // can have duplicates

    // find  searches for given value in map
    // return an iterator to that place if found otherwise to end and iterator is pointing to a pair
    if(m1.find(4) != m1.end())
        cout<<"found "<<m1.find(10)->second<<endl;    //both wil give same value
    else
        cout<<"Not found"<<endl;
    
    // printing
    for(auto it = m1.begin(); it != m1.end(); it++)
        cout<<it->first<<" "<<(*it).second<<endl;        // -> it is pointer therfore we use arrow operator
    cout<<endl;

    // erase  delete an element or set of elements from map
    m1.erase(10);

    // Ordered Map we can delete in range also
    m1.erase(m1.find(4),m1.find(11));

    // printing
    for(auto it = m1.begin(); it != m1.end(); it++)
        cout<<it->first<<" "<<(*it).second<<endl;        // -> it is pointer therfore we use arrow operator
    cout<<endl;

    
    return 0;

}
