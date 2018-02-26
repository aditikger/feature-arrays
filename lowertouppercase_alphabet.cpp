#include <iostream>
using namespace std;


const int x = 32;

char* lower_to_upper(char* abcd)
{
    for(int i=0; abcd[i]!='\0'; i++)
    	abcd[i] = abcd[i] & ~x; 
	return abcd;
}

int main(int argc, char* argv[])
{
	char abcd[] = "abcd";
    lower_to_upper(abcd);
    std::cout << abcd << std::endl;
	return 0;
}		