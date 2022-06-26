/*JMatulewicz
June 25, 2022
C prgm Recursive Procedure Matuelwicz to zciwleutaM*/
#include <stdio.h>

void reverse(char *str, int j, int k){
  char temp;
  if (j<k) {
    temp = str[j];
    str[j] = str[k];
    str[k] = temp;
    reverse(str, j+1, k-1);
  }//ra2
}
  int main(){
    char word[11] = "Matulewicz";
    printf("%s    ", word);
    reverse(word, 0, 9);
    printf("%s    ", word); //ral
    return 0;
  }

  /*
  Test Run
  Matulewicz    zciwelutaM 
  */