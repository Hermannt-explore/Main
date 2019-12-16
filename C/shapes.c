#include <stdlib.h>
#include <stdio.h>
#include<string.h>

//Function declarations
void triangle (int lines);
void diamond (int lines);
void hexagon (int lines);

//structure
typedef struct commands {
	int lines [20];
	char shape [20] ;
}command;

void main(){
//declare variables
int lines;
int num;
int i;
char h[]={"h"};
char t[]={"t"};
char d[]={"d"};
char shape[11];
//scan for number of shapes
scanf("%d", &num);
//create the structure
command c;
//push data in struct
for (i=0; i<num; i++){
scanf("%s", shape);
scanf("%d", &lines);
c.lines[i] = lines;
c.shape[i] = shape[0];
}
//determine which function to call
for (i=0; i<num; i++){
	if(c.shape[i] == t[0] ){
	triangle((int) c.lines[i]);
	}
	else if( c.shape[i] == d[0] ){
		diamond((int) c.lines[i]);
	}
	else if( c.shape[i] == h[0] ){
		hexagon((int) c.lines[i]);
	}
	else{
	exit;
	}
}
}

//triangle function 
void triangle(int lines){
int i;
int j;
int k;
int spaces;
int stars;
spaces = lines-1;
stars = 1;
for(i=0; i<lines; i++){
	for(j=0; j<spaces; j++){
		printf(" ");
	}
	for(k=0; k<stars; k++){
		printf("* ");
	}
	printf("\n");
	spaces =spaces-1;
	stars = stars +1;
}
printf("\n");
}

//diamond function
void diamond(int lines){
int i;
int j;
int k;
int spaces;
int stars;
spaces = lines-1;
stars = 1;
for(i=0; i<lines; i++){
	for(j=0; j<spaces; j++){
		printf(" ");
	}
	for(k=0; k<stars; k++){
		printf("* ");
	}
	printf("\n");
	spaces =spaces-1;
	stars = stars +1;
}
spaces=1;
stars= stars - 2;
for(i=0; i<lines-1; i++){
	for(j=0; j<spaces; j++){
		printf(" ");
	}
	for(k=0; k<stars; k++){
		printf("* ");
	}
	printf("\n");
	spaces =spaces+1;
	stars = stars -1;
}
printf("\n");
}

//hexagon function
void hexagon(int lines){
int i;
int j;
int k;
int spaces;
int stars;

if (lines == 1 ){
printf("*");
printf("\n");}
else if(lines == 2){
printf(" * *");
printf("\n");}
else if( lines%2 == 0 ){
spaces = (lines/2)-1;
stars=lines/2;

for(i=0; i<(lines/2); i++){	
	for(j=0; j<spaces; j++){
		printf(" ");
	}
	for (k=0; k<stars; k++){
		printf(" *");
	}
	printf("\n");
	spaces-=1;
	stars+=1;
}
spaces+=1;
stars-=1;
for(i=0; i<(lines/2); i++){
	for(j=0; j<spaces; j++){
		printf(" ");
	}
	for (k=0; k<stars; k++){
		printf(" *");
	}
	printf("\n");
	spaces+=1;
	stars-=1;
}

}//end else if
else if ( lines%2 == 1 ){
spaces = lines/2;
stars=spaces+1;

for(i=0; i<(lines/2)+1; i++){	
	for(j=0; j<spaces; j++){
		printf(" ");
	}
	for (k=0; k<stars; k++){
		printf("* ");
	}
	printf("\n");
	spaces-=1;
	stars+=1;
}
spaces+=2;
stars-=2;
for(i=0; i<(lines/2); i++){
	for(j=0; j<spaces; j++){
		printf(" ");
	}
	for (k=0; k<stars; k++){
		printf("* ");
	}
	printf("\n");
	spaces+=1;
	stars-=1;
}

}//end else if

}//end hex function
