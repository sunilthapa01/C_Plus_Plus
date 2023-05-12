

#include<iostream>

using namespace std;

int main()
{
	    
    int a,b,c,Sum;

    cout<<"Enter the angles  of triangle ::";

    cin>>a>>b>>c;

    Sum = a+b+c;

    if(Sum == 180)
    {
    	cout<<"\\\tIt is triangle\t\\"<<endl;


    }
    else
    {
    	cout<<"\\\tIs not triangle\t\\"<<endl;

    }


}