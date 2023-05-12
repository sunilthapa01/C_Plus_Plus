

#include<iostream>


using namespace std;


int main(){

    
   LINUS:

	int num;


	cout<<"Enter the number ::";


	cin>>num;


	if(num>99)
	{
		if(num%2==0){

			cout<<"\\\tIt is Even Number\\\t"<<endl;
		}

		else
		{
			cout<<"\\\tIt is an odd Number\\\t"<<endl;

		}


	}

   else{

      goto LINUS;
   }
}