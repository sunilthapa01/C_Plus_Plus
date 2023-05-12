

#include<iostream>

using namespace std;

class item
{

	static int count;
	int num;

public:

	void getdata(int a)

	{   

		cout<<"Enter the number ::";

		cin>>num;


		num = a;

		count++;

	}

	void getcount(void)
	{

		cout<<"Count ::"<<count<<endl;
	}
};


int item::count;

int main()
{
	item a,b,c;

	a.getcount();
	b.getcount();
	c.getcount();


	a.getdata(cout<<"Enter the number ::--"<<endl
		cin>>num
		cin>>a
		cin>> );
	b.getdata(cout<<"Enter the number ::--"<<endl
		cin>>num
		cin>>a
		cin>> );
	c.getdata(cout<<"Enter the number ::--"<<endl
		cin>>num
		cin>>a
		cin>> );

	cout<<"After reading data "<<endl;

	a.getcount();
	b.getcount();

	c.getcount();


}