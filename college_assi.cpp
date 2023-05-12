

// //demo of this pointer
// #include<iostream>
// using namespace std;
// // #include<conio.h>
// class test
// {
//  int a;
//  int b;
//  public:
//  void show ( int m, int n)
//  {
//  a =m;
//  b=n;
//  cout<<"\n Number1 = "<< this->a;
//  cout<<"\n Number2 = "<<this->b;
//  }
// };
// int  main()
// {
// //  clrscr();
//  test t1,t2,t3;
//  int m,n,s;
//  cin>>m>>n;
//  t1.show(m,n);
//  t2.show(15,25);
//  t3.show(30,n);
// //  getch();
// // return 0;

//  }

//Overloading the binary operator +
#include <iostream>

using namespace std;

// #include<conio.h>
class A
{

 int x;
 public:
 A(){}
 A(int i)
 {
 x=i;
 }
 void operator+(A);
 void display();
};

void A :: operator+(A a)
{

 int m = x+a.x;
 cout<<"The result of the addition of two objects is : "<<m;

}
int main()
{
 A a1(5);
 A a2(4);
 a1+a2;
//  getch();
}