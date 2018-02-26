#include <iostream>
using namespace std;	


int findmissing(int arr[], int n)
{
    int i = 0, num = arr[0];
    for (i = 1; i < n; i++)
    {
        num ^= arr[i];   
    }
    return num;
}

int findmin(int arr[], int n)
{
    int min = 1;
    for (int i = 0; i < n; i++ )
    {
    	if (min > arr[i])
    	{
    		min = arr[i];
    	}
    }
    return min;
}

int findmax(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++ )
    {
    	if (max < arr[i])
    	{
    		max = arr[i];
    	}
    }
    return max;
}

int main(int argc, char* argv[])
{
	int arr[] = {1, 2, 4, 5, 8, 3, 7}, here;
	int n = sizeof(arr)/sizeof(arr[0]);
	int inte = findmissing(arr, n);
	int min = findmin(arr, n);
	int max = findmax(arr, n);

	int hhs = 1 ^ 2 ^ 3 ^ 4 ^ 5 ^ 6 ^ 7 ^ 8;
	int hhs1 = 1 ^ 2 ^ 3 ^ 4 ^ 5 ^ 7 ^ 8;
	int hhs2 = hhs ^ hhs1;
	std::cout << hhs << std::endl;
	std::cout << hhs1 << std::endl;
	std::cout << hhs2 << std::endl;
	std::cout << "****************" << std::endl;
	std::cout << min << std::endl;
	std::cout << max << std::endl;
	here = min;
	for (int j = min+1; j <= max; j++)
	{
		here ^= j;
	}
	std::cout << here << std::endl;
	std::cout << inte << std::endl;
    int missing = inte ^ here;
    std::cout << missing << std::endl;

	return 0;
}
