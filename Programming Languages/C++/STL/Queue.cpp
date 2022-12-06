// Queue
// FIFO
#include<iostream>
#include<queue>

using namespace std;

void printQueue(queue <int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main()
{
    queue <int> q , q1;

    q.push(32);         //enqueue element in queue from rear
    q.push(43);
    q.push(56);

    q1.push(23);
    q1.push(76);

    cout<<q.front()<<endl;          //return value at front of queue

    q.pop();            //dequeue from front

    cout<<q.front()<<endl; 

    cout<<"Size : "<<q.size()<<endl;

    if(q.empty())
        cout<<"empty"<<endl;
    else    
        cout<<"Not empty"<<endl;

    q.swap(q1);

    printQueue(q);
    cout<<endl;
    printQueue(q1);

return 0;

}
Footer
