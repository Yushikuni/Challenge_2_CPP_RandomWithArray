/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int min, max,n;
    int randomField[n];
    
    srand(time(0));
    
    std::cout<<"Get minimum: ";
    std::cin>>min;
    std::cout<<"Get maximum: ";
    std::cin>> max;
    std::cout<<"Enter the size of the field: ";
    std::cin>>n;
    for(int i = 0; i < n; ++i)
    {
        randomField[i] = rand()%max;
    }
    
    for(int i = 0; i < n; ++i)
    {
        std::cout<<"Random number from "<<min<<" to "<<max<<" is: " << randomField[i] <<std::endl;
    }
    
    return 0;
}