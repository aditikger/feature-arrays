#include <iostream>
using namespace std;


int countsetbitsininteger(int num)
{	
    int x = num, count = 0;
    while(x)
    {
    	count += x & 1;
    	x = x >> 1;
    	std::cout << x << " " << count << std::endl;
    }
	return count;
}

int compact_method(int num)
{
    int x = num, count = 0;
    while(x)
    {
        x &= (x-1);
        count++;
    }
    return count;
}

int main(int argc, char* argv[])
{
	int num = 93;
	int forcout = countsetbitsininteger(num);
	std::cout << forcout << std::endl;

	forcout = compact_method(num);
	std::cout << forcout << std::endl;

	return 0;
}	