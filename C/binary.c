# include <stdio.h>

int main(){
int number[25], n, data, i, flag = 0, low, high, mid;
printf("Enter the number of elements:\n ");
scanf("%d", &n);
printf("Enter the elements in ascending order: \n");
for(i = 0; i < n; i++)
    scanf("%d", &number[i]);
printf("Enter the element to be searched: \n");
scanf("%d", &data);
low = 0; high =  n-1;
while(low <= high) {
mid = (low + high)/2;
if (number[mid] == data) {
flag = 1;
break;
}
else{
if (data < number[mid])
       high = mid - 1;
else
    low = mid + 1;
}
}
if(flag == 1)
printf("Data found at location: %d\n", mid + 1);
else
  printf("Data Not Found\n ");
}
