#include "structex.h"
struct City new_city(char *name , int lon ,int  lat){
struct City c = {
.name = name,
.lon = lon,
.lat = lat,
};
return c;
}
city_t change_details(city_t c,char *name,int lon,int lat){
city_t b = {
.name = name,
.lat = lat,
.lon = lon,
};
return b;
}
void ptr_update(city_t *c,char *name,int lon,int lat ){
city_t *b=c;

b->name=name;
b->lat=lat;
b->lon=lon;
}
