# include<stdio.h>
void selectionSort( int low, int high );
int a[25];
int main(){
int num,  i= 0;
printf( "Enter the number of elements: \n" );
scanf("%d", &num);
printf( "Enter the elements:\n" );
for(i=0; i < num; i++)
     scanf( "%d", &a[i] );
selectionSort( 0, num - 1 );
printf( "The elements after sorting are: \n" );
for( i=0; i< num; i++ )
     printf( "%d    ", a[i] );
return 0;
}
void selectionSort( int low, int high ){
int i=0, j=0, temp=0, minindex;
for( i=low; i <= high; i++ ) {
      minindex = i;
     for( j=i+1; j <= high; j++ )
       if( a[j] < a[minindex] )
            minindex = j;
     temp = a[i];
    a[i] = a[minindex];
    a[minindex] = temp;
  }
}

// 15
// 14
// 10
// 5
// 10
// 9
// 7
// 6