// 
// Audie Ploe
// 09/09/19
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main(int argc, char* argv[], char* envp[])
{
	int intloop = 0;

	cout << "Index" << "	" << "&envp[ix]" << "	" << "Ptr Address" << "	";
	cout << "Length" << "	" << "PtrContent" << endl;

	while (envp[intloop] != nullptr) // stop when reaching end of array
	{
		cout << intloop << "	";
		cout << &envp[intloop] << "	"; // print address of array
		cout << (void*) envp[intloop] << "	";
		cout << strlen(envp[intloop]) << "	"; // print length of cstring
		cout << envp[intloop] << endl << endl;
		intloop++;
	}

}