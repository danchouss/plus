#include <iostream>
#include <cmath>

int main()
{
    int N;
    std::cin >> N;
    for (int i=0; i<N; i++)
    {
        for (int j=1; j<=N-i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}