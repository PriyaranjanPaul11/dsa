//STACK USING ARRAY//

#include<iostream>
using namespace std;
class Queuepractice
{
private:
   int *data;
   int nextindex;
   int firstindex;
   int capacity;
   int size;

public:
    Queuepractice(int s){
 data=new int[s];
 firstindex=-1;
 nextindex=0;
 size=0;
 capacity=s;
    }
 int getsize(){
    return size;
 }
 void enqueue(int ele){
    if(capacity==size){
        cout<<"Queue is FuLL!"<<endl;
        return;
    }
    data[nextindex]=ele;
    nextindex=(nextindex+1)%capacity;
     if(firstindex==-1){
        firstindex=0;
     }
     size++;
 }
int front(){
    if(getsize()==0){
        cout<<"Queue is empty!";
        return 0;
    }
    return data[firstindex];
}
int del(){
 if(getsize()==0){
        cout<<"Queue is empty!";
        return 0;
    }
    int ans=data[firstindex];
    firstindex=(firstindex+1)%capacity;
    size--;
    if(size==0){
        firstindex=-1;
        nextindex=0;
    }
return ans;
}
bool isempty(){
return size==0;
}



};

int main(){
    Queuepractice q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(10);
    cout<<q.front()<<endl;

    cout<<q.del()<<endl;
    cout<<q.del()<<endl;
    cout<<q.del()<<endl;

    cout<<q.getsize()<<endl;
}
