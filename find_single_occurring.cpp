#include <iostream>
using namespace std;


int find_single_occurrence(int arr[], int n)
{
    int twos = 0, ones = 0;
    int common_bit_mask;
    for(int i = 0; i < n; i++)
    {
    	twos = twos | (ones & arr[i]);
        ones = ones ^ arr[i];
        common_bit_mask = ~(ones & twos);
        ones &= common_bit_mask;
        twos &= common_bit_mask;
    }
    return ones;
}

int main(int argc, char *argv[])
{
	int arr[] = {3, 3, 3, 9, 23, 1, 1, 1, 23, 23};
    // int arr[] = {3, 3, 2, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int forcout = find_single_occurrence(arr, n);
	std::cout << forcout << std::endl;
	return 0;
}