#include <stdio.h>
#include <stdlib.h>

void main(){
	FILE *file;

	if(!(file = fopen("ijunfu.txt", "r+"))){
		printf("Can not open file%s\n", "ijunfu.txt");
		system("pause");
	} else {
		printf("open success!");
	}

	fclose(file);
}