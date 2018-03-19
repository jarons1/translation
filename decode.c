#include "bits.h"

int decode_bits(int ch){
  static int buff = 0;
  static int bits = CHAR_BIT-1;
  buff = buff * 2;
  buff = buff + ch-48;
  bits--;
  if (bits == -1){
    /*    if (buff == 10){
      printf("%s", "\n");
      return 0;
      }*/
    printf("%c", buff);
    buff = 0;
    bits = CHAR_BIT-1;
  }
  return 1;
}
int main(){
  int c;
  int h;
  while ((c = getchar()) != EOF){
    if (!isspace(c) && 48 <= c && c <= 49){
      h = decode_bits(c);
    }
    else if (c == 10){
      printf("%c", c);
    }
  }
}



