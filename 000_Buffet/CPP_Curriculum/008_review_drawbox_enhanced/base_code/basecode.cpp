// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout << "Please enter the height of the line"<<endl;
	int hei;
	cin >> hei;
	cout << "Please enter the width of the line" <<endl;
	int wid;
	cin >> wid;
	cout << "Please enter the x-coordinate"<<endl;
	int x;
	cin >> x;
	cout << "Please enter the y-coordinate"<<endl;
	int y;
	cin >> y;
	cout << "Please enter the line symbol"<<endl;
	char sym;
	cin >> sym;
	for(int i = 0; i < hei; i++){
		for(int j = 0; j < wid; j++){
	gotoxy(x + j, y + i + 11);
	cout << sym;
		}
	}

}
