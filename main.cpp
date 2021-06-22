#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int number;
	
	cout<< "Enter a number based on Gregorian Calendar (1-12): ";
	cin>> number;
	
	switch (number){
		case 1:
			cout<< "\nJanuary";
			break;
		case 2:
			cout<< "\nFebruary";
			break;
		case 3:
			cout<< "\nMarch";
			break;
		case 4:
			cout<< "\nApril";
			break;
		case 5:
			cout<< "\nMay";
			break;
		case 6:
			cout<< "\nJune";
			break;
		case 7:
			cout<< "\nJuly";
			break;
		case 8:
			cout<< "\nAugust";
			break;
		case 9:
			cout<< "\nSeptember";
			break;
		case 10:
			cout<< "\nOctober";
			break;
		case 11:
			cout<< "\nNovember";
			break;
		case 12:
			cout<< "\nDecember";
			break;
		default:
			cout<< "\nSobra na, tama na.";
	}
	return 0;
}
