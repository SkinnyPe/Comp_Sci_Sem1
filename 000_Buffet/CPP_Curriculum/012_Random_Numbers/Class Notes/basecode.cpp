// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	while(kbhit()==0){
	gotoxy(1,2);
	
	cout << random(9);
	}
}
