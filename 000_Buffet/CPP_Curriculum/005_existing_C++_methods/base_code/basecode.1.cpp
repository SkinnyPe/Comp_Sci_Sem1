// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	for(int i = 0; i < 5; i++){
		gotoxy(3 + i, 4 + i);
		cout << 'x' << endl;
	}
	
}
