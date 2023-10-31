/*Function Overloading in C++
Function overloading is a process to make more than one function with the same name but 
different parameters, numbers, or sequence.*/
#include<iostream>
using namespace std;
int add(int a, int b)
{
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}
int add(int a, int b, int c)
{
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

//calculate the volume of a cylinder
int vol(double r, int h)
{
    return (3.14*r*r*h);
}
//calculate the volume of a cube
int vol(int a)
{
    return(a*a*a);
}

//rectangular box
int vol(int l, int b, int h)
{
    return(l*b*h);
}

int main()
{
    cout<<"The sum of 3 & 6 is "<<add(3,6)<<endl;
    cout<<"The sum of 3, 6, 1 is "<<add(3,6,1);
    cout<<"The volume of cylinder of 3,6,1 is "<<vol(3,6,1)<<endl;
    cout<<"The volume of cube of 3,6,1 is "<<vol(3,6,1)<<endl;
    cout<<"The volume of rectangular box of 3,6,1 is "<<vol(3,6,1)<<endl;
    return 0;
}
