
#include<iostream>

using namespace std;

int main()
{
	// float da,hra,bs,gs;

	// cout<<"Enter your basic salary ::";
	// cin>>bs;
	// da = bs*40/100;
	// hra = bs*20/100;

	// gs = bs+da+hra;
	/* cout<<"Gross salary = "<<gs<<"\n";
	ugioioog*/
    
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

 float cp,sp,pro,los;

 cout<<"Enter cost and selling price :::";

 cin>>cp>>sp;

 if(sp>cp){

 	pro = sp - cp;

 	cout<<"The Profit is = "<<pro<<endl;

 }
 else
 {
 	los = cp- sp;

 	cout<<"The loss is ="<<los<<endl;
 }

 }
 


