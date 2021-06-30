#include <stdio.h>
#include <stdlib.h>

void main(){

	FILE *file = fopen("a.txt", "r");

	if(!file) {
		printf("Open file faild!\n");
		exit(0);
	}

	char ch;

	// while((ch = fgetc(file)) != -1){
	// 	putchar(ch);
	// }

	while(!feof(file)) {		// end of file
		ch = fgetc(file);
		putchar(ch);
	}

	fclose(file);

}