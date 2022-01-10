// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
cout << "Pick the line symbol" << endl;
	char x;
	cin >> x;
	cout << "Choose a desired line length" << endl;
	int y;
	cin >> y;
	cout << "Choose whether you want the line to be horizontal, vertical, or diagonal (Please write the first letter of the choice you make!)" << endl;
	char z;
	cin >> z;
	char ho;
	ho = 'h';
	char hor;
	hor = 'H';
	char ver;
	ver = 'v';
	char vert; 
	vert = 'V';
	char dia;
	dia = 'd';
	char diag;
	diag = 'D';
	if(z == ho || z == hor){
		int deez;
		for(deez = 0; deez < y; deez++){
			cout<<x;
		}
	}
	if(z == ver || z == vert){
		
		for(int nutz = 0; nutz < y; nutz++){
			cout << x << endl;
		}
	}
	if(z == dia || z == diag){
		for(int i = 1; i < y + 1; i++){
			gotoxy(0 + i,6 + i);
			cout << x << endl;
		}

	}
}
