// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
cout << "Please input a symbol" << endl;
char x;
cin >> x;
for(int i = 2; i > 1; i++){
	gotoxy(1,3+i);
	cout << x << endl;
	sleep(1);
	gotoxy(1,3+i);
	cout << ' ' << endl;
	
	
}

}
