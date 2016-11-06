#include <stdio.h>

void filecat(char filedir[]){
	char ch;
	FILE *fc;
	fc = fopen(filedir,"rt");
	while((ch = fgetc(fc)) != EOF){
		putchar(ch);
	}
	fclose(fc);
	printf("\n");
}

int main(){
	int flag = 1;
	while (1 == flag){
		char filedir[100];
		printf("Pleasr input file's DIR(Q quit):\n");
		gets(filedir);
		if (filedir == "Q" || filedir == "quit"){
			printf("\n-----------------GAME OVER-----------------\n");
			flag = 0;
		}else{
			printf("The input String is : %s",filedir);
			printf("\n-----------------%s-----------------\n",filedir);
			filecat(filedir);
		}
	}
	return 0;
}