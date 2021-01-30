#include<iostream>
using namespace std;


int main()
{
    int i=0;
    while(i!=1)
    {
        int n;
        cout<<"\n1. Roll Dice\n2. Stop Game\n\nChoice: "<<endl;
        cin>>n;

        switch(n)
        {
            case 1:
                cout<<"\n\t---------> "<<(1 + (rand()%6))<<endl;
                break;
            
            case 2:
                i = 1;
                break;
            
            default:
                cout<<"\nEnter a valid choice!!!"<<endl;
                break;
        }
    }
    return 0;
}