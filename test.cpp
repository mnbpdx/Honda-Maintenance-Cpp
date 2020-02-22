/*
*	test.cpp
*	
*	Mark N. Beebe
*	2/22/2020
*/

#include "Job.h"


int main() {
	ifstream inFile;
	inFile.open("test.txt");

	Job job1;
	Job job2;
	inFile >> job1;
	cin.get('\n');
	inFile >> job2;

	job1.print();
	cout << endl;
	job2.print();	
}
