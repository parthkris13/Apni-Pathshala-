/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare
*/
#include<bits/stdc++.h>
using namespace std;
int n,op,val;
class Stack{
	queue<int> q;
	public:
    void push(int n)
    {
    	int s= q.size();
    	q.push(n);
    	for(int i=0;i<s;i++)
    	{
    		q.push(q.front());
    		q.pop();
		}
		cout<<n<<" is successfully inserted\n";
	}
	void pop()
	{
		if(q.empty())
		cout<<"stack is empty\n";
		else
		{
		cout<<q.front()<<" is successfully deleted\n";
		q.pop();
	}
	}
	int peek()
	{
		return q.front();
	}
	bool empty()
	{
		return (q.empty());
	}
	void display()
	{
		queue<int>q1;
		q1=q;
		while(!q1.empty())
		{
			cout<<q1.front()<<" ";
			q1.pop();
		}
		cout<<endl;
	}
		
		
};
int main()
{
   cout<<"hare krishna hare krishna\nkrishna krishna hare hare\nhare rama hare rama\nrama rama hare hare\n";
   cout<<"stack using queue\n";
   Stack s;
   do{
   	cout<<"choose the option\n";
   	cout<<"1. push in stack\n";
   	cout<<"2. pop from stack\n";
   	cout<<"3. peek ins stack\n";
	cout<<"4. display stack\n";
   	cout<<"5. exit\n";
   	cin>>op;
   	switch(op)
   	{
   		case 1:
   			cin>>n;
   			s.push(n);
   			break;
   			
   		case 2:
   			s.pop();
   			break;
   		case 3:
   			cout<<"top of stack is "<<s.peek()<<endl;
   			break;
   		case 4:
   			s.display();
   			break;
	   }
   }while(op!=5);
   
   
   
   

   return 0;
}

