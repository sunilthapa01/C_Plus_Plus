 

#include<iostream>


using namespace std;

int main()
{

	int  a = 10;

	int *b = &a;

    int c = *b;
    int  n = 20;
    // int *v = &n;





    cout<<"The address of a is --"<<&a<<endl;
    cout<<"The second value of a is --"<< a<endl;
    cout<<"The Value of a is --"<<c<<endl;
    // cout<<"The second value of a is --"<<<<endl;

    cout<<a<<"+"<<b<<"="<<a+b<<endl;

    



	
}