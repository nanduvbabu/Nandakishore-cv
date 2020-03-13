/* to find out the roots of a quadratic equation*/

#include<stdio.h>
#include<math.h>

void main()
	{
		float a,b,c,disc,r1,r2,realp,imagp;
		printf("\n Enter co-efficients a,b and c: ");
		scanf("%f%f%f", &a, &b, &c);

		disc=b*b-4*a*c;
		if(disc>0)
			{
				r1=(-b+sqrt(disc))/(2*a);
				r2=(-b-sqrt(disc))/(2*a);

				printf(" R1=%.2f and R2= %.2f ", r1, r2);
			}
		else if(disc==0)
			{
				r1=r2=-b/(2*a);
			        printf("/n R1 = R2 = %.2f", r1);
			}
		else
			{
				realp=-b/(2*a);
				imagp=sqrt(-disc)/(2*a);                  
			        printf(" R1= %.2f+%.2fi and R2 = %.2f-%.2fi", realp, imagp, realp, imagp);
			}

	}
