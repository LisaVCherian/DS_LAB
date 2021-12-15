#include <stdio.h>
#include <math.h>

struct poly{
int coeff;
int exp;
};

struct poly p1[10], p2[10];

int read(struct poly p[10])
{
	int i, s;
	printf("\nEnter the number of terms in polynomial: ");
	scanf("%d", &s);
	printf("Enter the coefficients and exponents in descending order:\n");

	for(i=0; i<s; i++)
	{
		printf("Enter coefficient %d: ", i+1);
		scanf("%d", &p[i].coeff);
		printf("Enter exponent %d: ", i+1);
		scanf("%d", &p[i].exp);
	}

	return s;	
}

void display(struct poly p[10], int t)
{
	int i;
	for(i=0; i<t-1; i++)
		printf("%d(x^%d) + ", p[i].coeff, p[i].exp);
	printf("%d(x^%d)\n", p[t-1].coeff, p[t-1].exp);
}

int res(struct poly p[10], int t, int x)
{
	int i;
	double result;
	for(i=0; i<t; i++)
		result+=(p[i].coeff * pow(x, p[i].exp));
	return result;
}

void main()
{
	int s1,x, result;
	s1 = read(p1);

	printf("\nPolynomial: ");
	display(p1, s1);

	printf("\nEnter the value of x: ");
	scanf("%d", &x);

	result = res(p1,s1,x);
	printf("Result: %d \n\n", result);

}
