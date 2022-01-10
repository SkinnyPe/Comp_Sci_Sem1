// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	cout << "Please enter the length of the line"<<endl;
	int hei;
	cin >> hei;
	cout << "Please enter the x-coordinate"<<endl;
	int xcor;
	cin >> xcor;
	cout << "Please enter the y-coordinate"<<endl;
	int ycor;
	cin >> ycor;
	cout << "Please enter the line symbol"<<endl;
	char sym;
	cin >> sym;
	gotoxy(xcor,ycor+7);
	for(int x = 0; x < hei; x++){
		cout<<sym;
	}
}
