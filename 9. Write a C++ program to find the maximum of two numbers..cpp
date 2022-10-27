/******************************************************************************
9. Write a C++ program to find the maximum of two numbers.
*******************************************************************************/

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two values\n";
    cin>>a>>b;
    (a>=b)?printf("%d\n",a):printf("%d\n",b);

    return 0;
}
