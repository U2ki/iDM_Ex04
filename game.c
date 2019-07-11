#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
int i,j,n;

srand((unsigned)time(NULL));

i = rand()%6+1;
j = rand()%6+1;
printf("%d+%d = %d\n",i,j,i+j);

return 0;
}