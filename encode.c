#include "bits.h"

int print_bits(int ch){
  if (ch == 10){
    printf("%s", "\n");
    return 0;
  }
  int count=0;
  int bin[CHAR_BIT];
  while (count < CHAR_BIT) {
    bin[count]= ch%2;
    //printf("%d", ch%2);
    ch = ch/2;
    count++;
  }
  int dig;
  for (int i = CHAR_BIT-1; i > -1; i--){
    dig = bin[i];
    printf("%d", dig);
  }
  return 0;
}

int main(){
  int c;
  int h;
  while ((c = getchar()) != EOF){
    h = print_bits(c);
  }
}

