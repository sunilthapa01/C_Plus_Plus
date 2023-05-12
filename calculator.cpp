

#include<iostream>
// #include<ctime>

using namespace std;

int main() {


    Calcu:


    float num1,num2;

   cout<<"Enter num1 and num2:::";

    cin>>num1>>num2;

    char op;

    cout<<"Choose Operator::\\<(+,-,*,/)>\\::";

    cin>>op;


    switch (op)

    {
     case '+':
       cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
       break;
     case '-':

     cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
     break;

     case '*':

    cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
         break;

   case '/':

     cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;

     break;

     case 'S':

     cout<<num1<<"*"<< num2<<num1*num2<<"."<<endl;


    

    default:

      cout<<"\\NOT APPLICABLE\\"<<endl;

      break;



   }

  goto Calcu;

  

}