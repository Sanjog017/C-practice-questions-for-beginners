// 1. Program to find sum of all even numbers between 1 to n
#include<stdio.h>
void main(){
	int sum=0,n,a=1;
	printf("Enter any number : ");
	scanf("%d",&n);
	do{
		if(a%2==0){
		sum=sum+a;

		}
		a++;
	}while(a<=n);
	printf("Sum is %d",sum);
}

// 2. Program to find sum of all odd numbers between 1 to n.
#include<stdio.h>
void main(){
	int sum=0,n,a=1;
	printf("Enter any number : ");
	scanf("%d",&n);
	do{
		if(a%2!=0){
			sum=sum+a;

		}
		a++;
	}while(a<=n);
	printf("Sum is %d",sum);
}

// 3. Program to print multiplication table of any number.
#include<stdio.h>
void main(){
	int n,c=1;
	printf("Enter any number : ");
	scanf("%d",&n);
	do{
		printf("%d*%d = %d\n",n,c,n*c);
		c++;
	}while(c<=10);


}

// 4. Program to count number of digits in a number.
#include<stdio.h>
void main(){
	int n,r1=0,c=0;
	printf("Enter any multi-digit number : ");
	scanf("%d",&n);
	do{
		r1=n%10;
		n=n/10;
		c++;
	}while(n!=0);
	printf("Your number is of %d digit",c);
}

// 5. Program to find first and last digit of a number.
#include<stdio.h>
void main(){
	int n,r1,r2;
	printf("Enter any multi-digit number : ");
	scanf("%d",&n);
	r2=n%10;
	do{
		r1=n/10;
		n=n/10;
	}while(n>=10);
	printf("first digit = %d \n last digit = %d",r1,r2);
}

// 6. Program to find sum of first and last digit of a number.
#include<stdio.h>
void main(){
	int n,r1,r2;
	printf("Enter any multi-digit number : ");
	scanf("%d",&n);
	r2=n%10;
	do{
		r1=n/10;
		n=n/10;
	}while(n>=10);
	printf("Sum is %d",r1+r2);
}

// 7. Program to swap first and last digits of a number.
#include<stdio.h>
void main(){
	int n,r1,r2,t=0;
	printf("Enter any multi-digit number : ");
	scanf("%d",&n);
	r2=n%10;
	do{
		r1=n/10;
		n=n/10;
	}while(n>=10);
	// swapping value;

	printf("Before swapping : \n");
	printf("\t first digit = %d \n \tlast digit = %d\n",r1,r2);
		printf("After swapping \n ");

		t=r1;
		r1=r2;
		r2=t;
	printf("\tfirst digit = %d \n \tlast digit = %d\n",r1,r2);
}

// 8. Program to calculate sum of digits of a number.
#include<stdio.h>
void main(){
	int sum=0,n,r1;
	printf("Enter any multi-digit number : ");
	scanf("%d",&n);
	do{
		r1=n%10;
		n=n/10;
		sum=sum+r1;
	}while(n!=0);
	printf("Sum of digits is %d",sum);
}

// 9. Program to print all Prime numbers between 1 to n.
#include<stdio.h>
void main(){

	int x,n,c,i;
	printf("Enter any number : ");
	scanf("%d",&n);
	for(x=1;x<=n;x++){
		c=0;
	for(i=1;i<=x;i++){
		if(x%i==0){
			c=c+1;
		}

	}
			if(c==2){
			printf("%d ",x);
		}
		}

	}

// 10. Program to find sum of all prime numbers between 1 to n.
#include<stdio.h>
void main(){

{
	int sum=0,i,j,n,c;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		c=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				c=c+1;
			}
		}
		if(c==2){
			sum=sum+i;
		}
	}
	printf("Sum is %d",sum);

}
}

// 11. Program to check whether a number is a Prime number or not.
#include<stdio.h>
void main(){

	int n,c=0,i;
	printf("Enter any number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			c=c+1;
		}

	}
			if(c==2){
			printf("Prime number");
		}
		else{
			printf("\n Not prime number");
		}
}

// 12. Program to check whether a number is an Armstrong number or not.
#include<stdio.h>
#include<math.h>
int main(){
	int c=0,n,r,temp1,temp2,i,arm=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	temp1=n;
	temp2=n;
	for(i=0;n!=0;i++){
		r=n%10;
		n=n/10;

		c++;
	}

	// for armstrog

	for(i=0;temp1!=0;i++){
		r=temp1%10;
		temp1=temp1/10;
		arm=arm+(pow(r,c));
	}

if(arm==temp2)
printf("Armstrong number ");
else
printf("Not armstrong number ");

	return 0;
}

// 13. Program to print all Armstrong numbers between 1 to n.
#include<stdio.h>
#include<math.h>
int main(){
	int n,c,i,r,arm,temp;
	printf("Enter a number : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		temp=i;
		c=0;
		// for counting digits
	while(temp!=0){
		r=temp%10;
		temp=temp/10;
		c++;

	}

	//for ARMSTRONG
	temp=i;
	arm=0;
	while(temp!=0){
		r=temp%10;
		temp=temp/10;
		arm=arm+pow(r,c);
	}
	if(i==arm){
		printf("%d\t",i);
	}


}
return 0;
}


// 14. Program to print Fibonacci series up to n terms.
#include<stdio.h>
void main(){
int n,sum=0,a,b,i,t;
printf("Enter a number : ");
scanf("%d",&n);
a=0;
b=1;
if(n==0){
    printf("1");
}
else if(n==1){
    printf("1");
}
else{
    printf("0 1");
    for(i=1;i<=n-2;i++){
        sum=a+b;
        t=a;
        a=b;
        b=sum;
        printf(" %d",sum);
    }
}
}


// 15. Program to display the following: 5, 55, 555, … up to 6th terms.
#include<stdio.h>
void main(){
int i,s=0;
for(i=1;i<=6;i++){
    s=s*10+5;
    printf("%d\t",s);
}

}


// 16. Program to display 1, 12, 123, 1234, 12345
#include<stdio.h>
int main(){
int i,p=0;
for(i=1;i<=5;i++){
    p=p*10+i;
    printf("%d\t",p);
}
return 0;
}


// 17. Program to print series: 1, 11, 111, 1111, 11111
#include<stdio.h>
int main(){

int i=0,p=0;
for(i=1;i<=5;i++){
    p=p*10+1;
    printf("%d\t",p);
}
return 0;
}


// 18. Program to display 33333, 3333, 333, 33, 3 by using
#include<stdio.h>
int main(){

int i=0,p=33333;
for(i=1;i<=5;i++){


    printf("%d\t",p);
    p=p/10;

}
return 0;
}


// 19. Program to display 1, 22, 333, 4444, 55555
#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
        printf("%d",i);
    }
    printf("\t");
}
return 0;
}


// 20. Program to display 12345, 1234, 123, 12, 1
#include<stdio.h>
int main(){
int i,j;
for(i=5;i>=1;i--){
    for(j=1;j<=i;j++){
        printf("%d",j);
    }
    printf("\t");
}
}


// 21. Program to display 55555, 4444, 333, 22, 1
#include<stdio.h>
int main(){
int i,j;
for(i=5;i>=1;i--){
    for(j=1;j<=i;j++){
        printf("%d",i);
    }
    printf("\t");
}
return 0;
}


// 22. Program to display 54321, 5432, 543, 54, 5
#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=5;i++){
    for(j=5;j>=i;j--){
        printf("%d",j);
    }
    printf("\t");
}
return 1;
}


// 23. Program to display 5, 54, 543, 5432, 54321
#include<stdio.h>
int main(){
int i,j;
for(i=5;i>=1;i--){
    for(j=5;j>=i;j--){
        printf("%d",j);
    }
    printf("\t");
}
return 1;
}


// 24. Program to generate 1800, 1600, 1400, ........ 10th term.
#include<stdio.h>
int main(){
int i,j;
for(i=1,j=1800;i<=10;i++,j=j-200){
    printf("%d\t",j);

}


return 0;
}


// 25. Program to generate 9, 28, 14, 7, 22, 11 .............. 10th term
#include<stdio.h>
int main(){
int i,n=9;
for(i=1;i<=10;i++){

			printf("%d\t",n);

	if(n%2==0){
		n=n/2;
	}

	else{
		n=(n*3)+1;
	}

}
return 0;
}


// 26. Program to check whether a number is a Perfect number or not.
/* ans. A perfect number is a positive integer that is equal to the sum of its proper divisors.
Factors of 6 = 1, 2, 3, 6
Proper divisors = 1, 2, 3
1+2+3=6
So, 6 is a perfect number
*/
#include<stdio.h>
int main(){

    int i,j,sum=0,n,c;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            if(n%i==0){
                sum=sum+i;
            }
    }
            if(sum==2*n){
            printf("Perfect Number ");
        }
        else
            printf("Not perfect number ");

return 0;
}


// 27. Program to print all Perfect numbers between 1 to n.
/* ans. A perfect number is a positive integer that is equal to the sum of its proper divisors.
Factors of 6 = 1, 2, 3, 6
Proper divisors = 1, 2, 3
1+2+3=6
So, 6 is a perfect number
*/
#include<stdio.h>
int main(){

    int i,j,sum=0,n,c;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            sum=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
               sum=sum+j;
            }
        }

        if(sum==2*i){
            printf("%d\t",i);
        }
    }

return 0;
}


// 28. Program to check whether a number is a Strong number or not.
#include<stdio.h>
int main(){
int c,n,p=1,i,r,sum=0;

printf("Enter a number : ");
scanf("%d",&n);
c=n;
while(c!=0){
    p=1;
    r=c%10;
    c=c/10;
    {
        for(i=r;i>=1;i--){
            p=p*i;

        }
        sum=sum+p;
    }
}
if(sum==n){
    printf("Strong number ");

}
else
    printf("not strong number ");
return 0;
}


// 29. Program to print all Strong numbers between 1 to n.
#include<stdio.h>
int main(){
int c,n,p=1,i,x,r,sum=0;

printf("Enter a number : ");
scanf("%d",&n);

for(x=1;x<=n;x++)
{
    c=x;
    sum=0;

while(c!=0){
    p=1;
    r=c%10;
    c=c/10;
    {
        for(i=r;i>=1;i--){
            p=p*i;

        }
        sum=sum+p;
    }
}
if(sum==x){
    printf("%d\t",x);
}
}
return 0;
}


// 30. Program to print the following series: 1, 4, 9, 16 ..... upto 10th term.
#include<stdio.h>
int main(){
int i;
for(i=1;i<=10;i++){
    printf("%d ",i*i);
}
return 0;
}