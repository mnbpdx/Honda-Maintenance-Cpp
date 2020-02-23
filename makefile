all:		test

test:		test.o Job.o
	g++ -g -Wall -std=c++11 test.o Job.o -o test

test.o:		test.cpp
	g++ -g -Wall -std=c++11 -c test.cpp

Job.o:		Job.cpp
	g++ -g -Wall -std=c++11 -c Job.cpp

clean:
	rm *.o test
