#include <iostream>
using namespace std;

int findOdd(int arr[], int n)
{
    int res = 0, i = 0;
    for (i = 0; i < n; i++)
    {
    	res ^= arr[i]; 
    }
    return res;
}

int main(void)
{
    int arr[] = {0, 1, 2, 3, 3, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int odd = findOdd(arr, n);
   	std::cout << odd << std::endl;
	return 0;
}