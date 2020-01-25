#include<stdio.h>
#include<stdlib.h>

void main(){
int i;
char initkey[6];
char key[6];
char c;
FILE *out, *enc;
out=fopen("decrypted.txt", "w");
enc=fopen("encrypted.txt", "r");
if(enc == NULL ){exit(0);}

printf("PLease enter 5-character encryption key : ");
for(i=0; i<6; i++){
	scanf("%c", &initkey[i]);
	if(initkey[0] == '\n')
	{	break;
	}
	if( (initkey[1] == '\n') |  (initkey[2] == '\n') |  (initkey[3] == '\n') |  (initkey[4] == '\n') )
	{	printf("Error! Key did not contain 5 characters.\n");exit(0);
	}	
}

if(initkey[0] == '\n'){
	for(i=0; i<5; i++){
		key[i] = 'a';
	}
	key[5] = '\n';
}
else{
	for(i=0; i<5; i++){
		key[i] = initkey[i];
	}
	key[5]= '\n';
}
i=0;
while( (c=fgetc(enc)) != EOF){
	if( i==5 ){
	i=0;
	}
	c= c ^ key[i];
	fputc(c, out);
	i++;
}
fclose(out);
fclose(enc);
printf("your file is named decrypted.txt\n");
}
