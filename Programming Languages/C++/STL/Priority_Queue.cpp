// Priority Queue (binary heap)
/*
max heap P > C1 && P > C2
min heap P < C1 && P < C2
*/


#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int> pq;         //by default maxheap top contain max  element
    cout<<"as max heap"<<endl;
    pq.push(34);
    pq.push(43);
    pq.push(76);
    pq.push(87);
    pq.push(23);

    cout<<pq.top()<<endl;   //top element

    pq.pop();               //remove top element

    // how to make min heap 

    priority_queue<int , vector<int> , greater<int> > p, p1;        //greater int is a template
    cout<<"as min heap"<<endl;;
    p.push(34);
    p.push(43);
    p.push(76);
    p.push(87);
    p.push(23);

    cout<<p.top()<<endl;
    // cout<<p.top()<<endl;        min heap min element

    cout<<"Size : "<<pq.size()<<endl;

    if(p.empty())
        cout<<"Empty"<<endl;
    else    
        cout<<"Not Empty"<<endl;

    p.swap(p1);             //afte swap p will become empty

    if(p.empty())  
        cout<<"Empty"<<endl;
    else    
        cout<<"Not Empty"<<endl;

}
