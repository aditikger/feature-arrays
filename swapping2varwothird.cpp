#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    if(x==y)
    	return;
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

int main(int argc, char* argv[])
{
	int x = 3, y = 4;
	std::cout << x << " " << y << std::endl;
    swap(&x, &y);
    std::cout << x << " " << y << std::endl;
    return 0;
}