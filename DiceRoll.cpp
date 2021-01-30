#include<iostream>
using namespace std;


int main()
{
    int i=0;
    while(i==0)
    {
        int n;
        cout<<"\n1. Roll Dice\n2. Stop Game\n\nChoice: "<<endl;
        cin>>n;

        switch(n)
        {
            case 1:
                int x = 1 + (rand()%6);
                cout<<"\n\t"<<x<<endl;
                break;
            
            case 2:
                i = 1;
                break;
            
            default:
                cout<<"\nEnter a valid choice!!!"<<endl;
                break;
        }
    }
}