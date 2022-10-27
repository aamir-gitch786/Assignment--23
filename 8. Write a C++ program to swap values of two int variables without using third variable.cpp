/******************************************************************************
8. Write a C++ program to swap values of two int variables without using third variable
*******************************************************************************/

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter first and seconde values\n";
    cin>>a>>b;
    a=a+b;//let a=10 , b=5 so a= 15
    b=a-b;//b=15-5 , b=10
    a=a-b;//a=15-10,a=5
    printf("After swaping %d and %d",a,b);
    

    return 0;
}
