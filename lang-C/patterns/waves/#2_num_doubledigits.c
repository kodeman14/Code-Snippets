#include <stdio.h>
#include <conio.h>

void main() {
  int e=2, wave_height=4, wave_length=4;
  int n1=wave_height, n2=wave_height+1;
  // change value to increase/decrease height/length of wave
  int y, count, x=1; clrscr();
  for (int i=wave_height; j<=wave_height+i; j++) {
    printf(" ");
  }
  for (count=1; count<=wave_length; count++) {
    for (n=(2*wave_height)-2; n>=x; n--) {
      printf(" ");
    }
    for (int k=1; k<=e; k++) {
      if (k==1) printf("/");
      else if (k==e) printf("\");
      else printf(" ");
    }
    x+=2; e+=2;
    printf("\n");
  } getch();
}

/*

   /\      /\      /\      /\      /\
  /  \    /  \    /  \    /  \    /  \
 /    \  /    \  /    \  /    \  /    \
/      \/      \/      \/      \/      \

*/
