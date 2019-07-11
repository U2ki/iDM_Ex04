#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
int i,j,n,k;
char name[20];

printf("What is your name?\n>");
scanf("%s",name);

printf("Hello,%s！\n", name);

srand((unsigned)time(NULL));

i = rand()%6+1;
j = rand()%6+1;
k = rand()%6+1;
printf("Die 1:%d\nDie 2:%d\nDie 3:%d\nTotal value:%d\n",i,j,k,i+j+k);

if((i+j+k)>=10) printf("%s won!\n",name );
else printf("%s lose!\n",name );

return 0;
}