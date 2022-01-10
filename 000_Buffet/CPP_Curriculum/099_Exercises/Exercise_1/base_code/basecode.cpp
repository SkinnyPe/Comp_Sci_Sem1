// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
int x = 5;
while(x <= 25){
	cout << x <<endl;
	
	
	x = x + 1;
}
int y = 15;
while(true){
	cout << y <<endl;
	if(y == 5){
		break;
	}
	y = y - 1;
}
for(int i = 5; i <= 25; i = i + 1){
	cout << i << endl;
}
for(int p = 15; p >= 5; p = p - 1){
	cout << p << endl;
}


}
