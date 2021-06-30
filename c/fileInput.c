#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	
	FILE *file;
	char filename[20], content[256];

	printf("请输入文件名:");
	scanf("%s", filename);

	// printf("%s", filename);
	if(!(file = fopen(filename, "wt+"))) {
		printf("打开文件失败！\n");
		exit(0);
	}

	printf("请录入文件内容：");
	scanf("%s", content);
	
	printf("%s\n", content);
	int len = strlen(content);
	for(int i=0; i<len; i++){
		fputc(content[i], file);
	}

	fclose(file);
}