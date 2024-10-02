#include<stdio.h>
 
float squarearea(float n);
float circlearea(float r);
float rectanglearea(float b, float l);


int main(){
float b=6;
float l = 5;
// printf("area is : %f",  squarearea(n));
// printf("area is : %f",circlearea(r) );
printf("area is : %f",rectanglearea (b,l) );
return 0;
}
float squarearea(float n){
  return n*n;
}
float circlearea(float r){
  return 3.14*r*r;
}
float rectanglearea(float b, float l){
  return b*l;
}