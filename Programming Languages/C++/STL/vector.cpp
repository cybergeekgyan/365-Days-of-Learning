//Vectors
#include<iostream>
#include<vector>

using namespace std;

int main()
{

    vector<int> v;

    // returns no of element in vector
    v.size();      

    // It pushes element at end of vector
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);

    // Print size of vector
    cout<<v.size()<<endl;

    // Print Capacity of vector  1 2 4 8 16 20 24
    cout<<v.capacity()<<endl;

    // User Input to a vector
    for(int i = 0; i<5; i++)
    {
        int key;
        cin>>key;
        v.push_back(key);           //after 3 elements which is already added first
    }

    // Printing vector
    for(int i = 0; i<v.size(); i++)
    {
        // at() also acts as v[i]
        cout<<v.at(i)<<" ";
        // Indexing also 
        // cout<<v[i];
    }

    cout<<endl;

    // Printing front and bach element
    cout<<v.front()<< " "<< v.back()<<endl;

    
    // How muxh max size are vector can hold of type <int> as vector is of type int
    cout<<v.max_size() << endl;             //no of elemets vector can contain

    int n;
    cin>> n;        //taking size from user

    vector<int> varr(n);        //vector of n elements

    varr.reserve(n);        //we not use because it invalidate the pointers
    
    varr.swap(v);  //swwwap all elements to vrr

    varr.clear();    //clear the vector

    if(varr.empty()) //return true if vector is empty
        cout<<true<<endl;
    else
        cout<<false<<endl;

    for(int i = 0; i<varr.size(); i++)
    cout<<varr.at(i)<<" ";


    /*
    begin() end() rbegin() rend() cbegin() cend() crbegin() crend() 
    */
    v = {1,2,3,4,5};
    // begin() give pointer to first element & end() gives pointer to last element
    for(auto it = v.begin(); it != v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    // rbegin() give pointer to last element & rend() gives pointer to first element
    for(auto it = v.rbegin(); it != v.rend(); it++)
        cout<<*it<<" ";
    cout<<endl;

    // cbegin() cend() constant/cannot change from start
    // crbegin() crend() constant/cannot change from reverse
    
    // g++ --std=c++14 vector.cpp

    return 0;
}

// vector<vector<int> >
