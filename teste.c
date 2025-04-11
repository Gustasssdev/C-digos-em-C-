#include <stdio.h>
 
int main() {
 

  float x;
  for(int i=1;i<=100;i++){
      
      x += 1.0/i;
     
    }
    printf("%.2f\n", x); 
    return 0;
}