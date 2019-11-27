#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char ** parse_args( char * line ){
	char *arr[5];
	int i = 0;
	while (line != NULL){
        char *arg = strsep(&line, " ");
		arr[i] = arg;
		i++;
	}
	return arr;
}

int main() {
	char line[100] = "ls -a -l";
	char *s1 = line;
	char **args = parse_args(s1);
    printf("arg: %s\n", args[0]);
    printf("arg: %s\n", args[1]);
    printf("arg: %s\n", args[2]);
    printf("arg: %s\n", args[3]);
    printf("arg: %s\n", args[4]);
}
