// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
cout << "Please enter the box width" << endl;
int wid;
cin >> wid;
cout <<"Please enter the x-coordinate" << endl;
int x;
cin >> x;
cout<<"Please enter the y-coordinate" << endl;
int y;
cin >> y;
cout << "Please enter the border character" << endl;
char bord;
cin >> bord;
cout << "Please enter the box height" << endl;
int hei;
cin >> hei;
for(int i = 0; i < hei; i++){
	for(int j = 0; j < wid; j++){
		gotoxy(i + 1, wid + j + 6);
		cout << bord;
	}
}
for(int k = 0; k < hei - 2;k++){
	for(int l = 0; l < wid - 2; l++){
		gotoxy(k + 2, wid + l + 7);
		cout << " ";
	}
}
}
