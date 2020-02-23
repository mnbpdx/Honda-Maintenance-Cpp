/*
*	Job.h
*	Implements Job Class
*	Description: Represents a automotive job (e.g. an oil change) 
*	
*	Mark N. Beebe
*	2/22/2020
*/

#include "Job.h"

Job::Job() {}

Job::Job(ifstream infile) {
//	infile >> this;
}

void Job::print() {
	cout << mileage << " " << task;
}

istream& operator >> (ifstream& inFile, Job& aJob) {
	inFile >> aJob.mileage;
	inFile.ignore(1, ';');
	getline(inFile, aJob.task);
	return inFile;
}

ostream& operator << (ofstream& outFile, Job& aJob) {
	outFile << aJob.mileage << ';' << aJob.task;
	return outFile;
}
