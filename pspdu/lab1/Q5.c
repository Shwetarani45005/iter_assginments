#include <stdio.h>

double Cal_acceleration(double t,double v1,double vf);

int main(void){
//a is acceleration
double a;
//t is time interval
double t=60.0; // in sec
//v1 is initial velocity
double v1=10.0; // mi/hr
//vf is final velocity.
double vf=2.5; // mi/hr

a=Cal_acceleration(t,v1,vf);

printf("Acceleration is %2.f \n",a);

}

double Cal_acceleration(double t,double v1,double vf)
{
double a;

a=(vf-v1)/t;

return a;
}

