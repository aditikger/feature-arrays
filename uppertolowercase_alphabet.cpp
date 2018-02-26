#include <iostream>
using namespace std;


const int x = 32;

char* upper_to_lower(char* ABCD)
{
    char* char_var;
    for (int i = 0; ABCD[i] != '\0'; i++)
        ABCD[i] = ABCD[i] | x ;
	return char_var;
}

int main(int argc, char* argv[])
{
	char ABCD[] = "ABCD";
	upper_to_lower(ABCD);
	std::cout << ABCD << std::endl;
	return 0;
}	