1) //program to find simple interest using function
#include<stdio.h>
int si (int,int,int);
int amt (int,int);
void main()
{
   int p,t,r,s,h;
   printf("Enter Principle=");
   scanf("%d",&p);
    printf("Enter Time=");
    scanf("%d",&t);
    printf("Enter rate=");
    scanf("%d",&r);
    s= si(p,t,r
    printf("the simple interest is =Rs.%d\n\n",s);
    h= amt(p,s);
     printf("The amount is=%d",h);
}
     int si(int p, int t, int r)
{
	int x;
	x= (p*t*r)/100;
	return x;
}
     int amt (int p,int s)
{
	int a;
	a=s+p;
	return a;
}

2) //program to print sum and average of 3 number 
#include<stdio.h>
int sum (int,int,int);
int avg (int);
void main ()
{
	int a,b,c,d,e;
	printf("enter 3 numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	d=sum(a,b,c);
	printf("The sum of 3 number is %d",d);
	e=avg(d);
	printf("the average is %d",e);
}
int sum (int a, int b, int c)
{
	int su;
	su=a+b+c;
	return su;
}
int avg (int d)
{
	int av;
	av=d/3;
	return av;
}

3) //program to convert celsius into farhenheit and vice versa using function
//f=°C × (9/5) + 32
//c=(32°F - 32) × 5/9
#include<stdio.h>
int f(int);
int c(int);
void main ()
{
	int ce,fi,fe,ci,a;
    printf("\t-----TEMPERATURE CONVERTER-----\n");
	printf("\t\tPress 1 for C to F\n\t\tPress 2 for F to C\n");
	scanf("%d",&a);
	if(a==1)
	{
		printf("Enter the celcius= ");
	scanf("%d",&ce);
	fi=f(ce);
	printf("The conversion of given celsius is %d F",fi);
}
else if (a==2)
{
	printf("Enter the Farhenheit=");
	scanf("%d",&fe);
	ci=c(fe);
	printf("The conversion of given farhenheit is %dC");
}
}

int  f(int ce)
{
	int x;
	x=ce * (9/5) + 32;
	return x;
}

int c(int fe)
{
	int y;
	y= (fe - 32) * 5/9;
	return y;
}

4) //program to convert seconds into hours,minutes and second 
	#include <stdio.h>
     int hours(int);
      int minutes(int);
      int seconds(int);

      void main()
{
    int total, h, m, s;

    printf("Enter total seconds: ");
    scanf("%d", &total);

    h = hours(total);
    m = minutes(total);
    s = seconds(total);

    printf("Hours = %d\n", h);
    printf("Minutes = %d\n", m);
    printf("Seconds = %d\n", s);
}

int hours(int t)
{
    return t / 3600;
}

int minutes(int t)
{
    return (t % 3600) / 60;
}

int seconds(int t)
{
    return (t % 3600) % 60;
}

5) //program to find sum of greatest and smallest element in an array using function
	#include <stdio.h>
int gr(int a[], int n);
int sm(int a[], int n);

void main()
{
    int a[10], n, i, g, s;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
		{
        scanf("%d", &a[i]);
		}
    g = gr(a, n);
    s = sm(a, n);

    printf("Greatest element = %d\nSmallest element = %d\n", g,s);
}
int gr(int a[], int n)
{
    int i, max;

    max = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}
int sm(int a[], int n)
{
    int i, min;

    min = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];
    }
    return min;
}

6) //program to swap values of two variables using function
	#include <stdio.h>
void swap(int, int);
void main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(a, b); 
}
void swap(int p, int q) 
{
    int temp;
    temp = p;
    p = q;
    q = temp;
    printf("After swapping: a = %d, b = %d\n", p, q);
}




