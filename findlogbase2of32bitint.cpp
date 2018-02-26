#include <iostream>
using namespace std;


int findlogbase2of32bitint(int num)
{
	int n = 0;
	// num = 2 ^ n
	while(num >>= 1)
	{
        n++; 
	}
	return n;
}

int main(int argc, char* argv[])
{
	int num = 64;
	int forcout = findlogbase2of32bitint(num);
	std::cout << forcout << std::endl;
	return 0;
}	