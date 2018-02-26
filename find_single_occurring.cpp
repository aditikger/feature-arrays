#include <iostream>
using namespace std;


int find_single_occurrence(int arr, int n)
{
    int single = 0;
    for(int i = 0; i < n; i++)
    {
    	single ^= arr[i];
    }
    return single;
}

int main(int argc, char *argv[])
{
	int arr[] = {1, 3, 3, 9, 23, 1, 1, 1, 23};
    int arr[] = {3, 3, 2, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int forcout = find_single_occurence(arr, n);
	std::cout << forcout << std::endl;
	return 0;
}