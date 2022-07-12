#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void HoT(void);
int countH=0,countT=0;
int main(){
  char name[10];
  printf("Who are you?\n");
  scanf("%s",&name);
  printf("Hello, %s!\n",name);
  printf("Tpssing a coin...\n");
  srand(time(NULL));
  for(int i=1;i<4;i++){
    printf("Round %d: ",i);
    HoT();
    printf("\n");
  }
  printf("Heads: %d, Tails: %d\n",countH,countT);
  return 0;
}

void HoT(void){
  int n;
  n=rand()%2;
  if(n==0){
    printf("Heads");
    countH++;
  }
  else if(n==1){
    printf("Tails");
    countT++;
  }
}


  
