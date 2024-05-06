//Prints every third prime number from 1 to 1000
    //used to help with a survey question I came across

#include <iostream>

int main()
{
    int thirdFlag = 0;
    bool isPrime=1;

    for (int i=3; i<1000; i++)
    {
        isPrime=1;
        for (int j=2; j<i; j++)
        {
            if (i%j==0)
            {
                isPrime=0;
            }
        }
        if (isPrime)
        {
            thirdFlag++;
            if (thirdFlag%3==0)
            {
                std::cout<<i;
                std::cout<<"\n";
            }
        }
    }
    
    return 0;
}