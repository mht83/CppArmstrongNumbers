//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>
#include <cmath>

bool check_armstrong(int a) {
    int number = a, sum=0;
    while (number != 0) {
        sum += std::pow(number % 10, 3);
        number /= 10;
    }
    return a == sum;
}

int main()
{
    for (int i = 0; i < 1000; ++i)
    {

        if (check_armstrong(i)) {
            std::cout << i << '\n';
        }
    }
    return 0;
}

