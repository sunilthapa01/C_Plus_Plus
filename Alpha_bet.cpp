

#include<iostream>

using namespace std;

int main()
{  

 char cha;

 cout<<"Enter an character::";

 cin>>cha;


if(cha>='a'&&cha<='z'){

	cout<<"\\\tIt is a character\t\\";

}
else if(cha>='A'&&cha<='Z')
{
	cout<<"\\\tIt is also a character\t\\";


}
else

cout<<"\\\tIt is not character\t\\";


return 0;


}