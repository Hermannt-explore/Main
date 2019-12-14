#include <stdlib.h>
#include <stdio.h>
void odd(int base);
void even(int base);

void main(){
int base;
scanf("%d", &base);
if((base%2) == 1){
	odd(base);
}
else if((base%2 == 0)){
	even(base);
}
else{
	exit;
}
}

void odd(int base){
int i;
int j;
int k;
int lines;
int spaces;
int stars;
lines = (base/2) +1;
spaces = (base/2);
stars = 1;
for(i=0; i<lines; i++){
	for(j=0; j<spaces; j++){
		printf(" ");
	}
	for(k=0; k<stars; k++){
		printf("*");
	}
	printf("\n");
	spaces =spaces-1;
	stars = stars +2;
}
}

void even(int base){
int i;
int j;
int k;
int lines;
int spaces;
int stars;
lines = (base/2);
spaces = (base/2);
stars = 2;
for(i=0; i<lines; i++){
	for(j=1; j<spaces; j++){
		printf(" ");
	}
	for(k=0; k<stars; k++){
		printf("*");
	}
	printf("\n");
	spaces =spaces-1;
	stars = stars +2;
}
}
