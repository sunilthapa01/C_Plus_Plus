

#include<iostream>

using namespace std;


int main()
{
	int Num;
    int nimo;

    // nimo = Num+1;

    cout<<"\\Enter the number ::";

    cin>>Num;

	if(Num%2==0){
       
       cout<<"\\It is even number\\\t"<<"And its update value is \\"<<Num+1<<".."<<endl;


	}

	else {

		cout<<"\\\tIt is odd number\\\t"<<"."<<"It is previous value is\\"<<Num-1<<"."<<endl;

	}
}