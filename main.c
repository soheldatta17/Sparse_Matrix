#include<stdio.h>
#include<stdlib.h>
int main(){
   int row,col,i,j,count = 0;
   printf("Enter row");
   scanf("%d",&row);
   printf("Enter Column");
   scanf("%d",&col);
   int *a;
   a=(int*)malloc(row*col*sizeof(int));
   printf("Enter Element of Matrix1\n");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         scanf("%d",&(*(a+(i*col)+j)));
         if(*(a+(i*col)+j) == 0)
         {
            count++;
         }
      }
   }
   printf("\nElements are:\n");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         printf("%d\t",*(a+(i*col)+j));
         
      }
      printf("\n");
   }
   if(count > ((row * col)/2))
      printf("Matrix is a sparse matrix ");
   else
      printf("Matrix is not sparse matrix");
}