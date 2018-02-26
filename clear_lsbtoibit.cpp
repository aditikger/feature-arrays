#include <iostream>
using namespace std;

// clear can be easy with mask
int lsbtoi_clearbit(int num, int i)
{
	int mask =  0;
	mask = ~((1 << (i+1)) - 1);
	std::cout << "mask " << mask << std::endl;
    num = num & mask;
	return num;
}

int main(int argc, char* argv[])
{
	int num = 33, i = 4;
    std::cout << "num: " << num << std::endl;
	int forcout = lsbtoi_clearbit(num, i);
	std::cout << "forcout: " << forcout << std::endl;
	return 0;
}	