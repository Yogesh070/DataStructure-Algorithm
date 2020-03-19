#include <iostream>
#include <new>
using namespace std;
class stack{
	int size,item,tos,i;
	public:
		int *stk;
		stack(int s)
		{
			size=s;
			item=tos=i=0;
		}
		void isEmpty()
		{
			if(tos==0)
			{
				cout<<"Stack Full"<<endl;
			}
			else
			cout<<"Stack is not Empty"<<endl;
			
		}
		void push(){
			if(tos==size)
			{
				cout<<"Stack overflow"<<endl;
			}
			else
			{
				cout<<"Push a data"<<endl;
				cin>>stk[tos];
				cout<<"Data added Successfull !!! \n"<<endl;
				tos++;
			}
		}
		void isFull(){
			if(tos==size)
			cout<<"The stack is full"<<endl;
			else
			cout<<"Stack is not Full"<<endl;
		}
		void pop(){
			if(tos==0)
			{
				cout<<"Stack Underflow"<<endl;
			}
			else{
				item=stk[tos-1];
				cout<<"Data from index " <<tos-1<<" popped"<<endl;
				tos--;
			}
		}
		void display(){
			cout<<"The data of stack"<<endl;
			for(i=0;i<tos;i++)
			{
				cout<<stk[i]<<" "<<endl;
			}
			cout<<endl;
		}
};

int main()
{
	int size,choice=1;
	cout<<"Enter the stack size:";
	cin>>size;
	stack st(size);
	st.stk=new int[size];
	while(choice!=0)
	{
		cout<<"Choose the option \n";
		cout<<" 1.PUSH \n 2.POP \n 3.Check empty case \n 4.Check full \n 5.Display \n 0.Exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				st.push();
				break;
			case 2:
				st.pop();
				break;
			case 3:
				st.isEmpty();
				break;
			case 4:
				st.isFull();
				break;
			case 5:
				st.display();
				break;
		}
		if(choice>5 || choice<0)
	{
		cout<<"Hey!! That's not valid, Enter a valid option to proceed: \n"<<endl;
	}
	}
	cout<<"\n Program terminated !";
	delete [] st.stk;
}
