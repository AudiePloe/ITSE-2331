// DataEntreeCam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>


using namespace std;

void CW() {
	ofstream CWaudie;

	if (CreateDirectory("A:\cameronProgram\Terms", NULL)) {
		// Directory Created
	}
	if (CreateDirectory("A:\cameronProgram\Jobs", NULL)) {
		// Directory Created
	}

	CWaudie.open("A:\\CameronProgram\\Terms\\CopyRight.txt");
	CWaudie.flush();
	CWaudie << "All rights reserved to Audie Ploe. Created as of 09/09/2019" << endl;
	CWaudie.close();
}


void NewEntree(string job)
{
	ofstream NewJob;
	string Name = "";
	string address = "";
	string Phone = "";
	char Answer = ' ';

	do
	{
		cout << "Please enter the name of the person: " << endl;
		cin >> Name;
		cout << endl;

		cout << "Please enter the address of the job: " << endl;
		cin >> address;
		cout << endl;

		cout << "Please enter the Phone number of the client" << endl;
		cin >> Phone;
		cout << endl;

		cout << "Was all data entered correctly? (Y)es, (N)o " << endl;
		cin >> Answer;
		toupper(Answer);
		cout << endl;
	} while (Answer == 'N');


	cout << "This part works" << endl << endl;

	// Make choice, and make sure good data entree
	//NewJob.seekp.end;

	NewJob.open("A:\\CameronProgram\\Jobs\\" + job + ".txt");
	NewJob << "Name Of Client: " << Name << endl;
	NewJob << "Address Of Job: " << address << endl;
	NewJob << "Phone Number Of Client: " << Phone << endl << endl;
	NewJob.close();
	
	/*cout << endl << endl << "Would you like to make a data entry to this job? (Y)es, (N)o" << endl;
	cin >> Answer;
	toupper(Answer);
	cout << endl;*/
}

void EnterData(string job)
{

}

int main()
{
	string Job = "";
	string Choice = "";
	CW();

	//cout << "Would you like to
	
	
	//cout << "Please enter the new job Name: ";
	//cin >> Job;
	//NewEntree(Job);


}
