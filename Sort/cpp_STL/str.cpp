#include <stdio.h>
#include <stdlib.h>


int main() {
	int num;
	scanf("%d", &num);
	char **str;
	str = (char **)malloc(sizeof(char *) * num);
	for(int i = 0; i < num; i++) {
		str[i] = (char *)malloc(sizeof(char) * 50);
	}
	for(int i = 0; i < num; i++) {
		scanf("%s", str[i]);
	}

	for(int i = 0; i < num; i++) {
		printf("%s\n", str[i]);
	}



	for(int i = 0; i < num; i++) {
		free(str[i]);
	}
	free(str);
	
	return 0;
}
