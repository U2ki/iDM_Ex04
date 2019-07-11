#include <stdio.h>
#include <stdlib.h>
#include <time.h>

printf("お名前は何ですか？\n");
scanf("%c",&name);

printf("こんにちは%cさん！\n", &name);

int main(void){
int i,j,n;

srand((unsigned)time(NULL));

i = rand()%6+1;
j = rand()%6+1;
printf("%d+%d = %d\n",i,j,i+j);

return 0;
}