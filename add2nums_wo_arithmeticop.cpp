#include <iostream>
using namespace std;

// Non-recursive solution
int add2nums(int x, int y)
{
	int carry = 0;
    while(y != 0)
    {
        carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}

// Recursive solution
int add2nums_recursive(int x, int y)
{
	if (y == 0) return x;
	else
	    return add2nums_recursive((x ^ y), ((x & y) << 1));
}

int main()
{
    int x = 10, y = 25;
    int sum = add2nums(x, y);
    int sum_rec = add2nums_recursive(x, y);
    std::cout << sum << std::endl;
    std::cout << sum_rec << std::endl;
    return 0;
}
