#include <stdio.h>
#include <string.h>

int main(){
  char str1[] = "Tuesday";
  char str2[256] = "Imagine";
  
  printf("Printing str1... %s\n", str1);
  printf("Printing str2... %s\n", str2);

  printf("Testing strcat()...\n");
  printf("Appending str2 to str1...\n\n");
  strcat(str1, str2);
  printf("Printing str1 after concatenation... %s\n", str1);
  printf("Printing str2 after concatenation... %s\n\n", str2);

  printf("Testing strncat()...\n");
  printf("str3 gets unmodified str1 and str4 gets unmodified str2...\n");
  char str3[] = "Tuesday";
  char str4[256] = "Imagine";
  printf("Appending 8 bytes of str4 to str3...\n\n");
  strncat(str3, str4, 8);
  printf("Printing str3 after concatenation... %s\n", str3);
  printf("Printing str4 after concatenation... %s\n\n", str4);

  printf("Testing strncat()...\n");
  printf("str5 gets unmodified str1 and str6 gets unmodified str2...\n");
  char str5[] = "Tuesday";
  char str6[256] = "Imagine";
  printf("Appending 4 bytes of str6 to str5...\n\n");
  strncat(str5, str6, 4);
  printf("Printing str5 after concatenation... %s\n", str5);
  printf("Printing str6 after concatenation... %s\n", str6);
  
  return 0;
}
  
