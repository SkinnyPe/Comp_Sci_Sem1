// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
cout << "Please select a symbol of your choice" << endl;	
char x;
cin >> x;
cout << "Please enter the height of the box" << endl;
int y;
cin >> y;
cout << "Please enter the length of the box" << endl;
int z;
cin >> z;

for(int wid = 0; wid < y; wid++){
	cout<<endl;
	for(int len = 0; len < z; len++){
		
		cout << x;
	} 
}

	
}
