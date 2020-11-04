#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char **argv) {
  if (argc != 1) {
    fprintf(stderr, "argument error");
    return 1;
  }

  char *p = argv[1];

  while (*p) {
    //空白の時
    if (isspace(*p)) {
      p++;
      printf("あ");
      continue;
    }
    //数字の時
    if (isdigit(*p)) {
      p++;
      printf("NUMBER");
      continue;
    }
    //"+"の時
    if (*p == '+') {
      p++;
      printf("PLUS");
      continue;
    }
    //"-"の時
    if (*p == '-') {
      p++;
      printf("MINUS");
      continue;
    }
    //上記以外の文字または符号の時
    fprintf(stderr, "Regulations error", *p);
    return 1;
  }
  //文字の最後
  printf("EOF");
  return 0;
}