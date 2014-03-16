// AirlineReservation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int checkSmokingSeats(int a[]);
int checkNormalSeats(int a[]);
int assignSmokingSeat(int a[]);
int assignNormalSeat(int a[]);

int _tmain(int argc, _TCHAR* argv[])
{
	int assignment = 0;
	int seats[11] = {0};
	int freeSeats = 10;

	while(freeSeats)
	{
		if(3 != assignment)
		{
			cout << "Please choose your seat: " << endl <<
				"\t1. Smoking Section (Press 1)." << endl <<
				"\t2. Non-smoking Section (Press 2)." << endl;
			cin >> assignment;
		}
		else{assignment = 1;}
		switch(assignment)
		{
			case 1:
				if(checkSmokingSeats(seats))
				{
					int seat = assignSmokingSeat(seats);
					seats[seat] = 1;
					cout << setw(22) << "Boarding Pass" << endl;
					cout << endl;
					cout << setw(15) << "|" << endl;
					cout << setw(14) << "/" << setw(2) << "\\" << endl;
					cout << setw(13) << "/" << setw(4) << "\\" << endl;
					cout << setw(12) << "/" << setw(6) << "\\" << endl;
					cout << setw(11) << "/" << setw(8) << "\\" << endl;
					cout << setw(10) << "/" << setw(10) << "\\" << endl;
					//Start of the smoking section
					cout << setw(10) << "|" << setw(8) << "SMOKING" << setw(2) << "|" << endl;
					cout << setw(10) << "|" << setw(2) << "1" << setw(3) << "2" << setw(3) << "3" << setw(2) << "|" << endl;
					cout << setw(10) << "|";
					for(int i = 1; i <= 3; i++)
					{
						if(seat == i){cout << setw(3) << "[*]";}
						else{cout << setw(3) << "[ ]";}
					}
					cout << setw(1) << "|" << endl;
					cout << setw(10) << "|" << setw(3) << "4" << setw(4) << "5" << setw(3) << " |" << endl;
					cout << setw(10) << "|";
					for(int i = 4; i <= 5; i++)
					{
						if(seat == i){cout << setw(4) << "[*]";}
						else{cout << setw(4) << "[ ]";}
					}
					cout << setw(2) << "|" << endl;
					//end of the smoking section
					//Start of the non-smoking section
					cout << setw(10) << "|" << setw(10) << "|" << endl;
					cout << setw(10) << "|" << setw(10) << "|" << endl;

					cout << setw(10) << "|" << setw(6) << "NON" << setw(4) << "|" << endl;
					cout << setw(10) << "|" << setw(2) << "1" << setw(3) << "2" << setw(3) << "3" << setw(2) << "|" << endl;
					cout << setw(10) << "|";
					for(int i = 6; i <= 8; i++)
					{
						if(seat == i){cout << setw(3) << "[*]";}
						else{cout << setw(3) << "[ ]";}
					}
					cout << setw(1) << "|" << endl;
					cout << setw(10) << "|" << setw(3) << "4" << setw(4) << "5" << setw(3) << " |" << endl;
					cout << setw(10) << "|";
					for(int i = 9; i <= 10; i++)
					{
						if(seat == i){cout << setw(4) << "[*]";}
						else{cout << setw(4) << "[ ]";}
					}
					cout << setw(2) << "|" << endl;
					//end of the non-smoking section
					cout << "Your seat is marked with a *" << endl;
					cout << endl;
					freeSeats--;
					break;
				}
				else
				{
					cout << "There are no seats available in the smoking section." << 
						" Would you like a seat in the non-smoking section instead? (1 for yes, 2 for no)" << endl;
					cin >> assignment;
					switch(assignment)
					{
						case 1:
							break;
						case 2:
							continue;
					}
				}

			case 2:
				if(checkNormalSeats(seats))
				{
					int seat = assignNormalSeat(seats);
					seats[seat] = 1;
					cout << setw(22) << "Boarding Pass" << endl;
					cout << endl;
					cout << setw(15) << "|" << endl;
					cout << setw(14) << "/" << setw(2) << "\\" << endl;
					cout << setw(13) << "/" << setw(4) << "\\" << endl;
					cout << setw(12) << "/" << setw(6) << "\\" << endl;
					cout << setw(11) << "/" << setw(8) << "\\" << endl;
					cout << setw(10) << "/" << setw(10) << "\\" << endl;
					//Start of the smoking section
					cout << setw(10) << "|" << setw(8) << "SMOKING" << setw(2) << "|" << endl;
					cout << setw(10) << "|" << setw(2) << "1" << setw(3) << "2" << setw(3) << "3" << setw(2) << "|" << endl;
					cout << setw(10) << "|";
					for(int i = 1; i <= 3; i++)
					{
						if(seat == i){cout << setw(3) << "[*]";}
						else{cout << setw(3) << "[ ]";}
					}
					cout << setw(1) << "|" << endl;
					cout << setw(10) << "|" << setw(3) << "4" << setw(4) << "5" << setw(3) << " |" << endl;
					cout << setw(10) << "|";
					for(int i = 4; i <= 5; i++)
					{
						if(seat == i){cout << setw(4) << "[*]";}
						else{cout << setw(4) << "[ ]";}
					}
					cout << setw(2) << "|" << endl;
					//end of the smoking section
					//Start of the non-smoking section
					cout << setw(10) << "|" << setw(10) << "|" << endl;
					cout << setw(10) << "|" << setw(10) << "|" << endl;

					cout << setw(10) << "|" << setw(6) << "NON" << setw(4) << "|" << endl;
					cout << setw(10) << "|" << setw(2) << "1" << setw(3) << "2" << setw(3) << "3" << setw(2) << "|" << endl;
					cout << setw(10) << "|";
					for(int i = 6; i <= 8; i++)
					{
						if(seat == i){cout << setw(3) << "[*]";}
						else{cout << setw(3) << "[ ]";}
					}
					cout << setw(1) << "|" << endl;
					cout << setw(10) << "|" << setw(3) << "4" << setw(4) << "5" << setw(3) << " |" << endl;
					cout << setw(10) << "|";
					for(int i = 9; i <= 10; i++)
					{
						if(seat == i){cout << setw(4) << "[*]";}
						else{cout << setw(4) << "[ ]";}
					}
					cout << setw(2) << "|" << endl;
					//end of the non-smoking section
					cout << "Your seat is marked with a *" << endl;
					cout << endl;
					freeSeats--;
					break;
				}
				else
				{
					cout << "There are no seats available in the smoking section." << 
						" Would you like a seat in the smoking section instead? (1 for yes, 2 for no)" << endl;
					cin >> assignment;
					switch(assignment)
					{
						case 1:
							assignment = 3;
							break;
						case 2:
							freeSeats = 0;
							
					}
				}
		;}
	}

	cout << "Next flight leaves in 3 hours" << endl;

	return 0;
}

int checkSmokingSeats(int a[])
{
	int freeSeats = 0;
	for(int i = 1; i <= 5; i++)
	{
		if(0 == a[i]){freeSeats += 1;}
	}

	return freeSeats;
}

int checkNormalSeats(int a[])
{
	int freeSeats = 0;
	for(int i = 6; i <= 10; i++)
	{
		if(0 == a[i]){freeSeats += 1;}
	}

	return freeSeats;
}

int assignSmokingSeat(int a[])
{
	for(int i = 1; i <= 5; i++)
	{
		if(!(a[i])){return i;}
	}

	return 0;
}

int assignNormalSeat(int a[])
{
	for(int i = 6; i <= 10; i++)
	{
		if(!(a[i])){return i;}
	}

	return 0;
}