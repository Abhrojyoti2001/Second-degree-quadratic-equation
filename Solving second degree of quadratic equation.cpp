#include<stdio.h>
#include<math.h>
main()
{	int a,b,c,d;
	char e,f,g;
	float p,q,s,u,v;
	printf("If your equation is of the form ax^2 + bx + c=0, then,\nenter (a) with it's sine ");
	scanf(" %c%d",&e,&a);
	printf("enter (b) with it's sine ");
	scanf(" %c%d",&f,&b);
	printf("enter (c) with it's sine ");
	scanf(" %c%d",&g,&c);
	d=(b*b)-(4*a*c);
	if (d==0)
		{p=0-(b/(2*a));
		printf("Two roots are %.4f,%.4f",p,p);}
	else if (d>0)
		{s=sqrt(d);
		p=((s-b)/(2*a));
		v=((b+s)/(2*a));
		q=0-v;
		if (b==0)
			printf("Two roots are in pair one is %3f,%3f & other is %.4f,%.4f",p,p,q,q);
		else
			printf("Two roots are %.4f,%.4f",p,q);}
	else
		{p=0-(b/(2*a));
		q=p;
		d=0-d;
		s=sqrt(d);
		u=s/(2*a);
		v=u;
		printf("Two roots are imaginary & they are %.4f+%.4fi,%.4f-%.4fi",p,u,q,v);}
}
