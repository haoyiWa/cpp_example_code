#include <iostream>
#include <string>
#include <sys/time.h>
#include <unistd.h>// sleep header file
#include <ctime>
#include "write&read.h"
#include "string&num.h"

using namespace std;
 
void test_stringnum();

int main()
{
    clock_t t;
    t = clock();

	timeval start;
	gettimeofday (&start , NULL);
    /********function test start********/
    test_stringnum();
    readwritetest();
    sleep(1);
    timeval finish;
	gettimeofday (&finish , NULL);
    /**********function test end********/
	long cost_time = finish.tv_usec - start.tv_usec;
	cout<<"run time : "<<(finish.tv_sec - start.tv_sec)+ cost_time/1000000.0<<endl;
    t = clock() - t;
    cout << "CPU time : " << ((double)t)/CLOCKS_PER_SEC << "s" << endl;
    
    return 0;
}

void test_stringnum()
{
    cout<<"*******test the function of string&num.h*******"<<endl;
    string temp_str = num2string<double>(1.1);
    cout<<"double2string: double "<<1.1<<" string "<<temp_str<<endl;
    double temp_double = string2num<double> (temp_str);
    cout<<"string2double: string "<<temp_str<<" double "<<temp_double<<endl;
}