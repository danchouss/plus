#include <iostream>
#include <cmath>

int func(int n)
{
    if (n==1)
    {
        return 1;
    }
    if (n==2)
    {
        return 2;
    }
    if (n != 1 && n != 2)
    {
        return func(n-1) + func(n-2);
    }
}

int main()
{
    int N;
    int sum = 0;
    std::cin >> N;
    for (int i = 1; i <=N; i ++)
    {
        sum += func(i);
    }
    std::cout << sum;
    return 0;
}



