// Algorithm

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

/*
Sort
Binary-_search
Find
*/
bool negative(int x)
{
    return x<0;
}

bool positive(int x)
{
    return x>0;
}

bool compare(int a, int b){
    return a>b; //reverse
}

void print(int x)
{
    cout<<x<<" ";
}
int main()
{
    vector<int> v{34,12,3,-34,3,1,56,3,-7,3,98};

    cout<<"Vector element"<<endl;
    for(auto it = v.begin() ; it != v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    // sort
    sort(v.begin(),v.end());

    cout<<"Vector element after Sort"<<endl;
    for_each(v.begin(),v.end(), print);             //print function do not need to write much (prevent from looping)
    cout<<endl;

    // sort in reverse order
    sort(v.begin(),v.end(),compare);
    // sort(v.begin(),v.begin() + 3,compare);        // for first 3 element

    cout<<"Vector element after Sort"<<endl;
    for_each(v.begin(),v.end(), print);
    cout<<endl;

    // reverse
    reverse(v.begin(),v.end()); 

    cout<<"Vector element after Reverese"<<endl;
    for_each(v.begin(),v.end(), print);
    cout<<endl;

    // max element in vector
    cout<<"Max = "<<*max_element(v.begin(),v.end())<<endl;          // return the iterator where is the max element is
    // min element in vector
    cout<<"min = "<<*min_element(v.begin(),v.end())<<endl;          // return the  iterator where the min element is

    // return the sum from starting address to last address takes 3 argumnets intial add last add and initial sum
    // numeric header file
    cout<<"Sum = "<<accumulate(v.begin(),v.end(),0)<<endl;          // 0 given as initial sum

    cout<<*find(v.begin(),v.end(), 8)<<endl;                        // return iterator to find value otherwise 0

    // if we want to know at what index find() found the value subtract v.begin() from the value return by find

    cout<<"Index wjere value found : "<<find(v.begin(),v.end(), 34)-v.begin()<<endl;

    // count        return count of any element
    cout<<"count of 3 "<<count(v.begin(),v.end(),3)<<endl;                // return count of 3

    // Binary Search can be used if vector is sorted
    if(binary_search(v.begin(),v.end(), 3))
       cout<<"3 exists"<<endl;
    else
        cout<<"3 not Exist"<<endl;
        
    /*first occurence and last occurence of a number if duplicates are there
    just a previous less element of the element given in vector (lower_bound) & 
    next greater number of given number in vector (upper_bound)*/

    auto itlb = lower_bound(v.begin(),v.end() , 3);         //return iterator to lower element to the no given
    auto itub = upper_bound(v.begin(),v.end() , 7);         //return iterator to higher element to the no given
    
    cout<<"lower to 3 if duplicate not exist "<<*itlb<<" Index "<<itlb-v.begin()<<endl;
    cout<<"higher to 7 if duplicate not exist "<<*itub<<" Index "<<itub-v.begin()<<endl;

    //permutation of a given vector
    next_permutation(v.begin(),v.end());
    for_each(v.begin(),v.end(), print);
    cout<<endl;

    prev_permutation(v.begin(),v.end());
    for_each(v.begin(),v.end(), print);
    cout<<endl;

    // check vector element is positive/negative  all +ve/-ve any or none
    // all_of, any_of , none-of  return boolean

    if(all_of(v.begin(),v.end(),positive))
        cout<<"All Positive"<<endl;
    else
        cout<<"Not all positive"<<endl;

    if(any_of(v.begin(),v.end(),negative))
        cout<<"atleast one is negative"<<endl;
    else
        cout<<"No negatives"<<endl;

    if(none_of(v.begin(),v.end(),negative))
        cout<<"no negatives"<<endl;
    else
        cout<<"contain neagatives"<<endl;  

    // iota     allocate continuous value to vector

    vector<int> vs(10);
    iota(vs.begin(),vs.end(),5);
    for_each(vs.begin(),vs.end(), print);
    cout<<endl;

    return 0;
}
