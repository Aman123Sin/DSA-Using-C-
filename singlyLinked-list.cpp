#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *add;
};
struct node *start;

int main()
{

    int choice;
    do
    {
        cout<<"\n----Singly Linked-List----";
        cout<<"\n Chose an option from the following list.";
        cout<<"\n
                1. Create \n
                2. Insert an element at begining\n
                3. Insert an element at any location\n
                4. Insert an element at last\n
                5. Delete elements from begining\n
                6. Delete element from last\n
                7. Delete element at any locations\n
                8. view\n
                9. Exit";
        cout<<"\n\n----------------------------------\n\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                Create();
                break;
            case 2:
                begininginsert();
                break;
            case 3:
                randomlyinsert();
                break;
            case 4:
                lastinsert();
                break;
            case 5:
                beginingdelete();
                break;
            case 6:
                randomlydelete();
                break;
            case 7:
                lastdelete();
                break;
            case 8:
                view();
                break;
            default:
                cout<<"Invalid choice.";
                break;
        }
    }
    while(choice!=9)

    
    return 0;
}
void Create
{
    char ch;
    int n;
    cout<<"Enter a Elements.";
    cin>>n;
    start = (struct node*)malloc(sizeof(struct node));
    start-> data=n;
    start-> add=null;
    temp=start;
    cout<<"Want to continue."<<endl;
    ch=getchar();
    while (ch=='Y' || ch=='y')
    {
        cout<<"please enter a new node."<<endl;
        cin>>n;
        new1 = (struct node*)malloc(sizeof(struct node));
        new1->data=n;
        new1->add=null;
        temp->add=new1;
        temp=temp->add;
        cout<<"want to continue."<<endl;
        ch=getchar();
        
    }
    

    
}

