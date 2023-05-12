

#include <iostream>
// #include <conio.h>
class rectangle
{
private :
float length, breadth;
public:
rectangle()//constructor definition
{
//displayed whenever an object is created
cout<<”I am in the constructor”;
length=10.0;
breadth=20.5;
}
float area()
{
return (length*breadth);
} 
};
void main()
{
clrscr();
rectangle rect; //object declared
cout<<"\nThe area of the rectangle with default parameters is:"<<rect.area()<<”sq.units\n”;
// getch();
}