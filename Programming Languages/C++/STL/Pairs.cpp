// Pairs

#include<iostream>
#include<queue>
using namespace std;

struct compare{
    bool operator() (pair<int,int> a,  pair<int,int> b)
    {
        return a.second < b.second;  //max heap   for min heap acc to secong a.second > b.second
    }
};

int main()
{
    pair<int, int>p;         // can be used in graph for using source and destination

    p = make_pair(5,3);     //make pair is a generic function

    cout<<p.first<<" "<<p.second<<endl;

    priority_queue<pair<int ,int> >  pq;

    pq.push(make_pair(34,23));
    pq.push(make_pair(23,78));
    pq.push(make_pair(90,11));
    pq.push(make_pair(88,9));   

    cout<<pq.top().first<<endl;         //max heap is due to first of pair
    cout<<pq.top().second<<endl;

    cout<<"for making it to second "<<endl;

     priority_queue<pair<int ,int>, vector<pair<int,int> > ,compare >  pq1;

    pq1.push(make_pair(34,23));
    pq1.push(make_pair(23,78));
    pq1.push(make_pair(90,11));
    pq1.push(make_pair(88,9));   

    cout<<pq1.top().first<<endl;         //max heap is due to second of pair
    cout<<pq1.top().second<<endl;
}
