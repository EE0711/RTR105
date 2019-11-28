#include<stdio.h>
#include<math.h>

int main()
{

 float a=0.01, b=1.5*M_PI,x, delta_x=1.e-3, funkca, funkcb, funkcx, i = 0;
 funkca = sin(a); funkcb = sin(b); 
 if(funkca*funkcb>0)
  {
   printf("Interval [%.2f;%.2f] sin(x) funkcijai",a,b);
   printf("Saknes nav vai ir pāra\n");
   return 1;
printf("sin(%7.3f)=%7.3f\t\t\t\t",a,sin(a));
printf("sin(%7.3f)=%7.3f\n",b,sin(b));
  }
 while((b-a)>delta_x){
  i++;
  x = (a+b)/2.;
  if(funkca*sin(x)>0)
   a = x;
  else
   b = x;
  printf("sin(%7.3f)=%7.3f\tsin(%7.3f)=%7.3f\tsin(%7.3f)=%7.3f\n",a,sin(a),x,sin(x),b,sin(b));}
  printf("sakne atrodas pie x=%.3f, jo    \n",x);
  printf("Tik reizes samazinaja intervalu %f\n",i);

 return 0;
}
