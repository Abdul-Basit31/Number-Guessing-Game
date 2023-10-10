//This is my first task of CODSOFT-Internship
//Name : ABDUL BASIT

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int a,b,c=0,d=0,f=0;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~Welcome to the Number Guessing Game~~~~~~~~~~~~~~~~~~~~~~~~~~~\nRules:\n"<<endl;
    cout<<"1.Enter y for yes and n for exit the game."<<endl;
    cout<<"2.You have to enter number in between 1-10."<<endl;
    char e;
    do
    {
    	
        cout<<"\n\nEnter the guess number from 1-10 you think: ";
        cin>>a;
        cout<<endl;
        b=rand() % (10-1+1) + 1;
  
        if(b==a)
        {
            cout<<"Congratulations you guess correct number     "<<endl;
            c++;
        }
        else
        {
            cout<<"Sorry,wrong guessded number Try again    "<<endl;
            d++;
        }
        f++;
        cout<<"\n\nDo you want to try again y/n: ";
        cin>>e;
        cout<<endl;
        if(e=='n'||e=='y'){}
        else
        {
            cout<<"Invalid input.Plz enter again to play game or to exit    "<<endl;
        }
    }while(e!='n');
    cout<<"You tried "<<f<<"times"<<endl;
    cout<<"You guessed correct number "<<c<<" times"<<endl;
    cout<<"You guessed wrong number  "<<d<<" times"<<endl;
}
