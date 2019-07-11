#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
int i,j,n;
char name[20];

printf("お名前は何ですか？\n");
scanf("%s",name);

printf("こんにちは%sさん！\n", name);

srand((unsigned)time(NULL));

i = rand()%6+1;
j = rand()%6+1;
printf("%d+%d = %d\n",i,j,i+j);

return 0;
}