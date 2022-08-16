# Challenge_2_CPP_RandomWithArray
Chanllenge day #2 Update code from day #1
pic:
![image](https://user-images.githubusercontent.com/42646031/184905773-7ed89713-e0c9-4b98-a811-1aff7ba508b3.png)

code:
```
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
```
