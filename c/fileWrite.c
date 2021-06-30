#include <stdio.h>
#include <stdlib.h>

void main(){
	FILE *fp;
	

	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	
	fp = fopen("a.txt", "w");

	if(!fp) {
		printf("Cannot open the file!\n");
		exit(0);
	}

	for(int i=0; i<26; i++){
		fputc(a[i], fp);
	}

	fputc('\r', fp);
	fputc('\n', fp);

	fclose(fp);
	
}