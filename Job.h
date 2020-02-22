/*
*	Job.h
*	Specifies Job Class
*	Description: Represents a automotive job (e.g. an oil change) 
*	
*	Mark N. Beebe
*	2/22/2020
*/
#ifndef _JOB_
#define _JOB_

#include <fstream>

using namespace std;

class Job {
public:
	Job(ifstream inFile);
	void print();

	friend istream& operator >> (ifstream& inFile, Job& aJob);
	friend ostream& operator << (ofstream& outFile, Job& aJob);
private:
	int mileage;
	string task;
};

#endif // _JOB_
