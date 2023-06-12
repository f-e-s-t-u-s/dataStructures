#include <stdio.h>

void bubblesort(int x[],int n){
int i,  j,  t;
for (i = 0; i < n; i++){
   for (j = 0; j <n-1; j++){
         if (x[j] > x[j+1]){
     t = x[j];
    x[j] = x[j+1];
    x[j+1] = t;
    }
  }
 }
}
 int main(){
int i, n, x[25];
printf("Enter the number of elements: \n");
scanf("%d",&n);
printf("Enter Data:\n");
for(i = 0; i < n ; i++)
scanf("%d", &x[i]);
bubblesort(x,n);
printf ("Array Elements after sorting: \n");
for (i = 0; i < n; i++)
printf ("%5d", x[i]);
printf("\n");
}

// 32
// 34
// 56
// 78
// 23