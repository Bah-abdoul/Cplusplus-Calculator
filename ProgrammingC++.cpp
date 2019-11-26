// ProgrammingC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
#include <ctime>
#include <string>
using namespace std;

          // Create a program to test a child concentration 
            
	int funcCalc(int a, int b) {

				int Y;
				Y = a * b;
				return Y;
			  }

int main()
{
	int n1, n2;
	srand(time(NULL));
	n1 = rand() % 10;
	n2 = rand() % 10;

    start:
	string answerChoice1[] = { "Very good!!","Excellent !!" , "Nice work", "keep up the work" };
	string answerChoice2[] = { "No,try again!","please try once more" , "Never give up", "keep trying" };
	
	int Y = funcCalc(n1, n2);
	int M;
     //  start1:
	//cout << "Practice again !!\n";

	cout << "How much is " << n1 << " multiply by " << n2 <<" ?"<< endl;
	cin >> M;
	if (M == Y) {
		cout << answerChoice1[rand() % 4] << endl;
		//goto start1;
	}
	else {
		cout<< answerChoice2[rand() % 4]<<endl;
		goto start;
	}


	system("pause");

	return 0;
}

