#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
int n1, n2;
scanf("%d%d", &n1, &n2);
if (n1 > n2){
   printf("%d %d\n", n2, n1);
}
if (n2 > n1){
   printf("%d %d\n", n1, n2);
}
if (n1 == n2){
   printf("%d %d\n", n1, n2);
}

    return 0;
}
