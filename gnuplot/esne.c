#include<stdio.h>
#include<math.h>

void main() 
{ float a,x,delta_x,b,y;
 FILE *fp = fopen("./esne.dat","w");
 a = 0;
 b = 2*M_PI;
 y = a;
 x = a;
 delta_x = 0.1;
 while(x<b)
 {
 fprintf("%10.2f",x); 
 fprintf("%14.2f\n",y);
 x = x + delta_x;
 y = sin(x);
//x += delta_x;
}
}




