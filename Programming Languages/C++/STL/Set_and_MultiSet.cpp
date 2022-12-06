// Set & Multiset (ordered and unordered)

// set No duplicates are allowed*/

// ordered set contain sorted order values which is implemented by binary search tree

// unordered set which is implemented by hashing

// multiset similar to set but duplicates are allowed in order

//unordered  multiset not in order

#include<iostream>
#include<set>
using namespace std;
int main()
{
    // set
   set <int> s;
   s.insert(45); 
   s.insert(45); 
   s.insert(45); 
   s.insert(45);
   s.insert(55);

   for(auto it = s.begin(); it != s.end(); it++)
        cout<<*it<<" ";             // duplicates n ot allowed
    cout<<endl;

    //erase function delete one element or set of element

    //s.erase(55);

    //s.erase(s.find(10)) ;    // can directly pass the iterator as find return iterator

    // erase func also erases a set of element for we have to give the iterator of starting to last

    //s.erase(s.find(10),s.find(20));  // delete element from 10 to 20 include 10 exclude 20
    // if we have to give elements which exist otherwise segmentation fault
    if(s.find(55) != s.end())
    {
        //return a iterator to its location if exist or otherwise return pointer
        cout<<"Found"<<endl;
    }
    else
        cout<<"Not Found";

    // multiset    
    multiset<int> ms;

    ms.insert(15);    
    ms.insert(45);    
    ms.insert(455);    
    ms.insert(25);    
    ms.insert(35);    
    ms.insert(45);    

    for(auto it = ms.begin(); it != ms.end(); it++)
        cout<<*it<<" ";             // duplicates  allowed
    cout<<endl;

    ms.erase(ms.find(15),ms.find(45));  //delete in range 15 - 45 (include 15 exclude 45)

    for(auto it = ms.begin(); it != ms.end(); it++)
        cout<<*it<<" ";             
    cout<<endl;

    //s.lower_bownd & s.upper_bound are also functions used in sets
    
    return 0;
}
