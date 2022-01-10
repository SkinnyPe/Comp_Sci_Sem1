// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
cout << "Please input an integer" << endl;
int num1;
cin >> num1;
cout << "Please input another integer" << endl;
int num2;
cin >> num2;
cout << "Please input an operation" << endl;
char joe;
cin >> joe;
if(joe == '+'){
	cout << "Your answer is " << (num1 + num2) << endl;
}

if(joe  == '-'){
	cout << "Your answer is " << (num1 - num2) << endl;
}

if(joe == '*'){
	cout << "Your answer is " << (num1 * num2) << endl;
}

if(joe == '/'){
	cout << "Your answer is " << (num1/num2) << endl;
}








}
