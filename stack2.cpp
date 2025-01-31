#include<iostream>
#define MAXSIZE 10
using namespace std;
int stack[MAXSIZE],top=-1;

  void push()
  {
    int n;
    if(top==MAXSIZE-1)
        cout<<"your stack is overflow"<<endl;
    else
    {
        cout<<"enter the element"<<endl;
        cin>>n;
        top++;
        stack[top]=n;
    } 
  }
  void display()
  {
    if(top==-1)
        cout<<"stack is empty"<<endl<<endl;
    else
    {
        cout<<"elements of stack"<<endl;
        for(int i=top;i>=0;i--)
        cout<<stack[i]<<endl;
    }
  }
  void pop()
  {
    int n;
    if(top==-1)
        cout<<"stack in empty"<<endl<<endl;
    else
    {
        n=stack[top];
        top--;
        cout<<"poped element"<<n<<endl;
    }
  }
int main()
{
    int choice; 
    do
    {
        cout<<"________stack________"<<endl;
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;

        switch(choice) 
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            default :
                cout<<"invailed choice"<<endl;
                break;
        }
        
       
    }
    while (choice !=4);
    return 0;
}