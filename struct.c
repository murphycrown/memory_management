#include "munit/munit.h"
#include <stdio.h>
#include "exercises/exercise.h"
#include "exercises/structex.h"
float add(int a,int b){
/*data type we are usingwhen we declare  
the function tells which type of value  the function will return in the end*/
return (float)(a+b);
//we just make sure the variable is going to be float by using casting(data_type)(variable)
}
int  check_architecture(){
int architecture=sizeof(int *)*8;
printf("Your system is:%d bit\n",architecture);
};
int main(){
// first way initializing
struct City first;
first.lon=90;
//second way of initializing
struct  City second={.lon=80,.name="london",.lat=80};
printf("longitude of the first: %d\nlongitude of the second: %d\n",first.lon,second.lon);
//best way of initializing
struct City c = new_city("san fransisco",50,60);
//checking cpu architecture bitness
check_architecture();
printf("Creating a struct\n");
printf("City:%s,longitude:%d,lattitude:%d\n",c.name,c.lon,c.lat);
//changing details of an existing struct
city_t changed=change_details(c,"london",90,98);
//Keep that in mind
//C creates another copy of a struct when we send it via function 
printf("Changed details\nCity:%s,longitude:%d,lattitude:%d\n",changed.name,changed.lon,changed.lat);
printf("Previous values of c:\n");
printf("City:%s,longitude:%d,lattitude:%d\n",c.name,c.lon,c.lat);
//pointer
printf("Pointers\n");
int x_ptr=5;
//declaration of pointers
int *x_ptra=&x_ptr;
printf("Address of the variable in the memory: %p\n",x_ptra);
//creating another struct 
city_t struct_1={"berlin",90,80};
printf("City:%s,longitude:%d,lattitude:%d\n",struct_1.name,struct_1.lon, struct_1.lat); 
printf("Renewing a bit\n");
//Changing value of the struct by using pointer 
city_t *pointer=&struct_1;
pointer->name="bangladesh";
printf("Changing value of the struct by pointer\n");
printf("City:%s,longitude:%d,lattitude:%d\n",struct_1.name,struct_1.lon, struct_1.lat); 
//we  are sending a address of the struct in the memory
ptr_update(&struct_1,"Incheon",50,60);
//when the function runs it changes our previous struct_1
printf("Changing value of the struct by function\n");
printf("City:%s,longitude:%d,lattitude:%d\n",struct_1.name,struct_1.lon, struct_1.lat); 
//if you use -DTEST while you compile the code it will  the code block under the #ifdef will be executed
#ifdef TEST
munit_assert_int(integer, == ,age);
munit_assert_int(struct_1.lat, == ,60);
munit_assert_int(struct_1.lon, ==, 50);
#endif
printf("value:%d value age:%d\nAdd %f \nMultiplication %f\n\n",integer,age,add(3,4),multiply(3,4));
return 0;
}

