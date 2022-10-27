/******************************************************************************
7. Write a C++ program to calculate the square of a number
*******************************************************************************/

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int a;
    cout<<"Enter a number \n";
    cin>>a;
    
    cout<<"Square of "<<a<<" is "<<pow(a,2);
    

    return 0;
}
