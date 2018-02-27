#include <iostream>
using namespace std;


int countsetbits(int num)
{
	int count = 0;
	while(num)
	{
        count = num & 1;
        num = num >> 1;
	}
	return count;
}


int flip_atob(int a, int b)
{
    return countsetbits(a ^ b);
}

int main(int argc, char* argv[])
{
	int a = 10, b = 20;
	int result = flip_atob(a, b);
	std::cout << result << std::endl;
	return 0;
}