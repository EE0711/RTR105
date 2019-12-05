#include<stdio.h>
#include<math.h>

void main()
//apreekj atvas vert, ieguut veert attelot ar gnuplot
//sin(x) atvas ir cos(x)
// x sin(x) sin`(x)
{
float a=0.,b=2*M_PI,x,delta_x=1.e-2,y1,y2;
printf("\tx\t\tsin(x)\t\tsin\'(x)\n");
x = a;
while(x<b)
{
 printf("%10.2f\t%13.2f\t%10.2f\n",x,(sin(x)*sin(x)/**cos(x)*cos(x)*/),((sin(x+delta_x))*(sin(x+delta_x))-(sin(x))*(sin(x))/(delta_x)));

 x += delta_x;//x = x+delta_x
}






}
/*//sin^2(x)*cos^2(x)
(sin(x))`
(sin(x+delta_x)-sin(x))/delta_x)
((sin(x+delta_x))*(sin(x+delta_x))-((sin(x))*(sin(x))/(delta(x))));
(
*/
