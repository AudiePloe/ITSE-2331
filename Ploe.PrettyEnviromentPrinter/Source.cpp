//
// Audie Ploe
// 09/12/19
//
//-----------------------------------------------------------
//SAS Comments
//    MISSING .SLN file... again, zip the full program structure
//    as we do more complex programs, there will be several folders
//    (one per project) going into a single program.
//



#include <iostream>

using namespace std;


int STRLEN(const char* str)
{
	int length = 0;

	while (*(str + length++) != '\0')
	{
		 
	}

	return length;
}




//SAS: WRITE BLOCK COMMENTS FOR YOUR FUNCTIONS:
// FunctionName: Description
//  Description and Notes
//  Input
//       param1      blah blah
//  Output
//       param3      Document all return via reference or pointer parameters
//  Return
//       Purpose and values of return for normal and exceptional conditions



//SAS: Block comments

char* STRCPY(char* bfr, const char* src)
{

	while (*bfr++ = *src++)
	{

	}

	return bfr;
}


//SAS: STRCHR should return *POINTER* to 1st found match, or nullptr

 int STRCHR(const char* str, char chr)
{
	int length = 0;

   //    Rewrite this to return POINTER to the MATCHING CHARACTER FIRST POSITION


	while (chr != *(str + length++))
	{

	}
	  
	return length;
}



char* STRNCPY(char* bfr, const char* str, int length)
 {

	for (int ix = 0; ix < length; ix++)
	{

		while (*(str + ix++) != '\0')
		{
			*bfr++ = *str++;
		}

		*bfr++ = '\0';

	}




	return nullptr;
 }


 char* STRTRUNC(char* str, int length)     // CONST on integral types is generally not an issue...
 {
	 char* p = (str + length + 3);

	 *p = '\0';

	 char* q = p - 3;



	 return str;
 }








int main(int argc, char* argv[], char* envp[])
{
	const char* Name = "Audie";
	char nameBuffer [32];
	char valueBuffer[64];



	STRNCPY(nameBuffer, Name, 10);

	cout << nameBuffer << endl;
	//STRCPY(nameBuffer, Name);
	//cout << "STRCPY" << endl << nameBuffer << endl;
	//cout << "STRLEN" << endl << STRLEN(Name) << endl;
	//cout << "STRCHR" << endl << STRCHR(Name, 'd') << endl;
	//cout << "STRCPY" << endl << STRCPY(bfr, Name) << endl;


   //SAS: Finally, we get to the "meat" - and there's nothing here.  
   //     1st cut you should have just copied your original environment program main loop here.
   //       That gives you a starting point to test & debug your primitive functions.
   //    It's pretty obvious you worked on this... then stopped.
   //    Pointers are hard.  You have to give yourself TIME to understand what *seems* like an easy problem.
   //    You can do much better.



	//cout << "STRTRUNC" << endl << STRTRUNC(nameBuffer, 5) << endl;
	
    

	return 0;
}