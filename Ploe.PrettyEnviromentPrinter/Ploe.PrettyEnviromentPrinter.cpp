//
// Audie Ploe
// 09/12/19
//

#include <iostream>

using namespace std;


int STRLEN ( const char* str )
{
	char ix = ' ';
	int length = 0;

	while (ix != NULL)
	{
		ix = str[length];	// *(str + length)
		length++;
	}

	return length - 1;
}





// while (*dst++ = *src++);

char* STRCPY ( char* dst, const char* src )
{


	while (*src != '\0')
	{
		*dst = *src;
		src++;
		dst++;
	}


	return dst;
}












char* STRCHR ( const char* str, char chr )
{
	return nullptr;
}

int main ( int argc, char* argv[], char* envp[] )
{
	const char* Name = "Audie Ploe";
	cout << STRLEN(Name) << endl;


	return 0;
}