/***************************************************************************************
 * Program:	Text Game
 * Author: 	Sathya Ramanathan
 * Date:	10/20/2015
 * Description:	Short text adventure game 
***************************************************************************************/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
	srand(time(NULL));
	int x;
	system("clear");	
	cout << "You have robbed a bank and are in a tight situation. What do you do next?" << endl; 
	cout << "Enter (1)to sneak out the back. Enter (2)to walk past the police like a normal pedestrian: ";
	cin >> x;

	if (x==1) {
		cout << "You successfully snuck out the back. Enter (1)to steal a car. Enter (2)to run away as far as you can: ";
		cin >> x;
		if (x==1) {
			int random = rand() % 2;
			if (random == 0) {
				cout << "Unfortunately, after a big police pursuit, you get aressted. The End. " << endl;
			}
			else if (random == 1) {
				cout << "Sadly, you get into a car accident and die. The End. " << endl;
		}	}
		else if (x==2) {
			cout << "You have ran really far away, but unfortunately after a big police pursuit, you get arrested. The End. " << endl;
		}
		else
			cout << "You have typed an incorrect number" << endl;
	}	
	else if (x==2) {
		cout << "You successfully walked past the police. Enter (1)to go into a big crowd. Enter (2)to sneak into an alley: ";
		cin >> x;
		if (x==1) {
			cout << "Unfortunately, a witness from the bank sees you and you get arrested. The End. " << endl;
		}
		else if (x==2) {
			cout << "You successfully sneak out through the alley. You get away with the money and flee the country! Hooray! " << endl;
		}
		else
			cout << "You have typed an incorrect number " << endl;
	}
	else
		cout << "You have typed an incorrect number " << endl;

	return 0;
}
	
