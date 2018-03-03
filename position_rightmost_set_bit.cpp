#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int rightmostsetbitposition(int n)
{
	int pos = log2(n&(-n))+1;
    return pos;
}

int main(int argc, char* argv[])
{
	int forcout = rightmostsetbitposition(8);
	std::cout <<  forcout << std::endl;
    return 0;
}