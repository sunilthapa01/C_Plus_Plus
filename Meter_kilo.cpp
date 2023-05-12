

#include<iostream>

using namespace std;

int main()
{

	float kilo,met;

	cout<<"\t\\************CONVERSTION OF METER INTO KILOMETER********************\\"<<endl;


	cout<<"\tEnter the meter::";

	cin>>met;


	kilo = met/1000;


	cout<<"\t\\Before converstion\\"<<endl;

	cout<<"\t\\Meters :"<<met<<"m"<<endl;

	cout<<"\t\\After conversion\\"<<endl;

	cout<<"\t\\Kilometer :"<<kilo<<"km"<<endl;

	return 0;

}