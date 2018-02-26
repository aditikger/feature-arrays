#include <iostream>
using namespace std;


int if32bitintispowerof2(int x)
{
	return (x && !(x & (x-1)));
}

int main(int argc, char* argv[])
{
	int num = 8; // 10
	int forcout = if32bitintispowerof2(num);
    std::cout << forcout << std::endl;
	return 0;
}	