#include"NewtonsMethod.h"   // header file included encapsulating NewtonsMethod
#include<iostream>

using namespace std;

int main()
{
	double t = 1; //initialed t=1
	double Fr=0; //initialized Fr with 0
	int x;
	cout << "For the equation of the force F=0.55t-0.3sin(at)-F3" << endl;
	cout << "Choose '1' for F3=5 N and '2' for F3=10 N: ";
	cin >> x;			//takes choice from keyboard 
	switch (x)			//switch cases 
	{
	case 1: {							//case 1 f3=5N

				//object F1 of class NewtonsMethod created using contructor passing lambda expression 
		NewtonsMethod F1([Fr](double t) {return F(t, 5); }, [](double t){ return dF(t); });
		F1.Calculate(t);				//calls members function Calculate of object F1
		break; }
	case 2: {							//case 2 f3=10N
		NewtonsMethod F2([Fr](double t) {return F(t, 10); }, [](double t) { return dF(t); });
		F2.Calculate(t);
		break; }
	default:						//default case 
		cout << "\nEnter valid option !!\n";
		break;
	}
	
}
