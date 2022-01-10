// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	for(int j = 0; j < 2;j++){
		for (int i = 0; i < 1;i++){
		gotoxy(5 + i,12 + j);
		cout << "*";
		}
	}
 for(int p = 0; p < 2; p++){
 	for(int d = 0; d < 2;d++){
 		gotoxy(4 + d, 10 + p);
 		cout << "/";
 	}
 }
 for(int s = 0; s < 2; s++){
 	for(int h = 0; h < 2; h++){
 		gotoxy(6 +  h, 10 + s);
 		cout << "/";
 	}
}
gotoxy(8,11);
cout << "/";
gotoxy(3,11);
cout << "/";
for(int yo = 0; yo < 2; yo++){
	gotoxy(5 + yo,9);
	cout << "/";
}

for(int z = 0; z < 5; z++){
	for(int y = 0; y < 7; y++){
		gotoxy(20 + y , 5 + z);
		cout << "*";
	}
}
for(int t = 0; t < 8; t++){
	for(int j = 0; j < 8; j++){
		gotoxy(35 + j, 5 + t);
		cout << "~";
	}
}
for(int r = 0; r < 6; r++){
	for(int two = 0; two < 6; two ++){
		gotoxy(36,4);
		cout << " ";
	}
}
}
