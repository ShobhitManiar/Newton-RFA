#pragma once
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<functional>
using namespace std;
#define a 1						//	pre-processor directive to define a and iteration					
#define iteration 100	

class NewtonsMethod
{
private:
	function<double(double)>f;		//private member of class NewtonsMethod
	function<double(double)>df;		// conatining function f and its derivative df
public:
	
	NewtonsMethod(function<double(double)>F, function<double(double)>dF) :f(F), df(dF){};	//contructor 
	double Calculate(double t);						//member function to calculate successive solution
	double display(double,double,double,double);	//member function to display solution
	
	
};

double F(double t,double Fr)		//definition of contructor argument F returns f at t and Fr
{
	return 0.55*t-0.3*sin(a*t)-Fr;
}
double dF(double t)				//definition of contructor argument dF return df at time t
{
	return 0.55 - 0.3*cos(a*t);
}
double NewtonsMethod::display(double t, double i,double f,double e)			//definition of member function display(....) 
{																				
	cout << fixed << setprecision(6);			//sets output precision to 6 decimal points
	cout <<i<<"\t\t"<<t<<" sec\t\t"<<f<<" N\t\t"<<e<<endl;	//prints iteration,time,force and erroe
	return(0);
}
double NewtonsMethod::Calculate(double t) //member function definition 
{
	int i=1;
	double epsilon;
	double t0;
	cout << "-------------------------------------------------------------------------------------"<<endl;
	cout << "Itertion\t\tt\t\t\tf(x)\t\t\terror"<< endl;
	cout << "-------------------------------------------------------------------------------------"<<endl;
	do
	{
		t0 = t - f(t) / df(t);
		epsilon = t0 - t;
		display(t0,i,f(t0),epsilon);
		t = t0;
		i++;
			if (i > iteration)		//if counter exceeds iteration program terminates with early convergence
				{
					cout << "Cannot converge !";
					exit(0);
				}

	} while (fabs(epsilon) >= 0.001);
	cout << "-------------------------------------------------------------------------------------"<< endl;
	cout << "The earliest time when f(x) converges is " <<t<<" sec\n";

	return t0;
}

