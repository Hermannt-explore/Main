#include<stdio.h>
#include<stdlib.h>

void main(){
int h=0;
int i;
int width;
int height;
char c;
//get user input in (width height charater) format
scanf("%d %d %c", &width, &height, &c);
//print the top side of the rectangle
for(i=0; i<width; i++){
printf("%c", c);
}

printf("\n");

//print the left and right sides of the rectangle
while (h<(height-2)){

for(i=0; i<width; i++){
if( (i==0) | (i==(width-1)) ){
	printf("%c", c);
}
else{
	printf(" ");
}
}
printf("\n");
h++;
}
//print the bottom line of the rectangle
for(i=0; i<width; i++){
printf("%c", c);
}
printf("\n");
}

