//Deque
// faster than vector in terms of insetion and deletion

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    // deque<int> dq{32 ,32 , 34 ,1 ,24};
    deque<int> dq , dq2;
    int n , key;
    cin >> n;

    for(int i = 0; i< n; i++){
        cin>>key;
        dq.push_back(key);
        // dq.push_front(key);
    }

    cout<<"front "<<dq.front()<<endl;     //print front value
    cout<<"back = "<<dq.back()<<endl;      //print back value
    cout<<"Size = "<<dq.size()<<endl;

    for(auto it = dq.begin() ; it != dq.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<"ELement at Index 3 : "<<dq.at(3)<<endl;

    dq2.swap(dq);           //swap

    dq.clear();  //make deque empty and size 0;

    cout<<"Size = "<<dq.size()<<endl;

    for(auto it = dq.begin() ; it != dq.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    if(dq.empty())
        cout<<"Empty"<<endl;
    else    
        cout<<"Not Empty"<<endl;

    for(auto it = dq2.begin() ; it != dq2.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}
