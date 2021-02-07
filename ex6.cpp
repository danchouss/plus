#include <iostream>
#include <cmath>

int main()
{
    int N;
    std::cin >> N;
    for (int i=0; i<N; i++)
    {
        for (int k=0; k<i; k++)
        {
            std::cout << " ";
        }
        for (int j=1; j<=N-i*2; j++)
        {

            std::cout << "*";
        }
        for (int k=0; k<i; k++)
        {
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}