#include <stdio.h>
#include "exercises/arrayex.h"
void  decay(int arr[]){
//arr is  actually a pointer here
printf("Decays\n");
printf("Size of an array is: %zu\n",sizeof(arr));
};
void not_decay(int (*arr)[5]){
//arr doesn't decays because we  used & 
printf("Not decays\n");
printf("Size of an array is: %zu\n",sizeof(*arr));

};

int main(){
array_t myarr[3]={
{1,2,3},
{4,5,6},
{7,8,9},

};
int normal_array[5]={1,2,3,4,5};
int *ptr=(int *)myarr;
//working with struct type casted arrays
printf("Array prints myarr[0].x:%d\n",myarr[0].x);
printf("Array points *(ptr+4):%d\n",*(ptr+4));//fifth element
printf("Array prints ptr[4]:%d\n",ptr[4]);//fifth element
//working with the normal arrays
printf("Array prints *(normal_array+2):%d\n",*(normal_array+2));//third  element
//working with the struct type arrays
printf("Array prints (*(myarr+2)).x : %d\n",(*(myarr+2)).x);//first way
printf("Array prints (myarr)->x:%d\n",(myarr)->x); //best way
//array decaying
int *ptr_1=normal_array;
//size of a normal array
printf("Size of an array:%zu\n",sizeof(normal_array));
//size of a decayed array which is pointer
printf("Size of a pointer:%zu\n", sizeof(ptr_1));
//array wil be decayed when we passed it into a function
decay(normal_array);
//but it is not decayed if we use &
int (*ptr_2)[5]= &normal_array;
printf("Size of the ptr_2 is %zu\n",sizeof(*ptr_2));
not_decay(&normal_array);
return 0;
}
