#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
typedef struct point
{
double x;
double y;
}point;

int main(){
point*p=malloc(sizeof(*p));
if(!p){
printf("Faiffled");
return 0;
}
p->x=1;
p->y=1;
double dist=sqrt(p->x*p->x+p->y*p->y);
printf("the dist(%.lf,%.lf) from origin %.4lf\n",p->x,p->y,dist);
free(p);

}