// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
cout << "Please enter a symbol" <<endl;
char x;
cin >> x;
cout << "Please enter the line length" <<endl;
int y;
cin >> y;
cout << "Horizontal or Vertical (Write the first letter of the word!)" <<endl;
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
if(z == ho || z == hor){
	int lin;
	
	for(lin = 0;lin < y; lin++){
		cout<<x;
	}
	
}
if(z == ver || z == vert){
	int len;
	for(len = 0;len < y; len++){
		cout<<x<<endl;
	}
}
}
