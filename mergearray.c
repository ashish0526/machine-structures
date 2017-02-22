#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<windows.h>

#define MAX1 5
#define MAX2 7

int *arr;

int *create (int);
void sort(int * , int );
void display(int *, int);
int *merge(int *,int*);

int main(){

int *a, *b,*c;
system("cls");
printf("enter elements for first array\n");
a = create(MAX1);

printf("enter elements for second array\n");
b = create(MAX2);
sort(a,MAX1);
sort(b,MAX2);
printf("disply\n");
display(a,MAX1);
printf("display\n");
display(b,MAX2);

c = merge(a,b);
display(c,MAX1 + MAX2);

return 0;



}

int *create(int size){
  
  int *arr,i;

  arr = (int * )malloc(sizeof(int )*(size));
  for( i = 0; i < size ;i++  )
  	scanf("%d", & arr[i]);
  return arr;



}

void sort(int *arr , int size){

  int i;
  for(i = 1; i< size;i++ ){
   int j = i -1;
   int x = arr[i];
 
 while( j >= 0 && x <= arr[j]){
   arr[j+1] = arr[j];
   j--;


 }
  arr[j+1] = x;
  }


}

void display(int *arr,int size){

 int i;
 for(i = 0; i< size;i++){
  printf("%d\n", arr[i]);



 }
}

 int *merge(int *a,int *b){
  int *arr;
  int i,k,j;
  int size = MAX1 + MAX2;
  arr = (int *)malloc(sizeof(int ) *(size));
  
  j = 0;
  k = 0;

  for(i = 0 ; i< size;i++)
  {
  	if(j < MAX1 && k< MAX2){
    if(*(a + j) < *(b + k)){
      *(arr + i) = *(a +j);
      j++;


    }


    else{
    	*(arr + i) = *(b + k);
    	k++;
    }
}

else if (j == MAX1){
  *(arr + i) = *(b + k );
  k++;

}
else
{
*(arr + i) = *( a + j);
 j++;

}

  }
  return arr;




 }





