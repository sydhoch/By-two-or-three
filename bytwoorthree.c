#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define EXIT_SUCCESS 0;

int main(int argc, char* argv[]){

	int i=0;
	int j=1;
	int n =  atoi(argv[1]);
	while(i<n){
		if(j%2==0 || j%3==0){
			printf("%d\n", j);
			i++;
		} 
		j++;
	}
	return EXIT_SUCCESS;
	
}