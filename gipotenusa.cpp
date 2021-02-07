#include <iostream>
#include <cmath>

int main()
{
    double x, y, z;
    std::cin >> x >> y;
    z = sqrt(x*x + y*y);
    std::cout << z;
    return 0;
}