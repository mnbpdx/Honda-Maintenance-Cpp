/*
*	Job.h
*	Implements Job Class
*	Description: Represents a automotive job (e.g. an oil change) 
*	
*	Mark N. Beebe
*	2/22/2020
*/

#include "Job.h"

Job::Job(ifstream infile) {
	infile >> this;
}

void Job::print() {
	cout << mileage << " " << task;
}

istream& operator >> (ifstream& inFile, Job& aJob) {
	inFile >> mileage;
	cin.get(';')
	inFile >> task;
}

ostream& operator << (ofstream& outFile, Job& aJob) {
	outFile << mileage << ';' << task;
}
