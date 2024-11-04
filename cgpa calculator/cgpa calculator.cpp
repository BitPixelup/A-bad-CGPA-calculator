#include <iostream>

using namespace std;


int main(){
    
	double subject1;
	double subject2;
	double subject3;
	double subject4;
	double subject5;

	double credit1;
	double credit2;
	double credit3;
	double credit4;
	double credit5;

	double FGP1;
	double FGP2;
	double FGP3;
	double FGP4;
	double FGP5;

	double Fc;
	double Fs;

	double FCGPA;


	cout << "SUBJECT No. 1--enter your score from 1 to 10.\n";
	cin >> subject1; 
	
	cout <<"SUBJECT No. 1--enter your credit from 1 to 10.\n";
	cin >> credit1;
	
	cout << "SUBJECT No. 2--enter your score from 1 to 10.\n";
	cin >> subject2;

	cout << "SUBJECT No. 2--enter your credit from 1 to 10.\n";
	cin >> credit2;

	cout << "SUBJECT No. 3--enter your score from 1 to 10.\n";
	cin >> subject3;

	cout << "SUBJECT No. 3--enter your credit from 1 to 10.\n";
	cin >> credit3;

	cout << "SUBJECT No. 4--enter your score from 1 to 10.\n";
	cin >> subject4;

	cout << "SUBJECT No. 4--enter your credit from 1 to 10.\n";
	cin >> credit4;

	cout << "SUBJECT No. 5--enter your score from 1 to 10.\n";
	cin >> subject5;

	cout << "SUBJECT No. 5--enter your credit from 1 to 10.\n";
	cin >> credit5;


	FGP1 = subject1 * credit1;
	FGP2 = subject2 * credit2;
	FGP3 = subject3 * credit3;
	FGP4 = subject4 * credit4;
	FGP5 = subject5 * credit5;
	
	Fc = credit1 + credit2 + credit3 + credit4 + credit5;
	Fs = FGP1 + FGP2 + FGP3 + FGP4 + FGP5;


	FCGPA = Fs / Fc;


	cout << "Your final GPA is: " << FCGPA;

}