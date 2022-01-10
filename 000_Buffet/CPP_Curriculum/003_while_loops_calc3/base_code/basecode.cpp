// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
 int x = 0;
 char quit = x;
  while (true){
 	
 	cout << " You've been gnomed";
 	cin >> quit;
 	
 	if(quit == 'q'){
 		cout << "Hog rider";
 		break;
 	}
 	
 	if(x == 100){
 		break;
 	}
 	x = x + 1;
  }
}
