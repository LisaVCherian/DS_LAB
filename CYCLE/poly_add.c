#include <stdio.h>

struct poly{
int coeff;
int exp;
};

struct poly p1[10], p2[10], p3[10];

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

int add(struct poly p1[10], struct poly p2[10], struct poly p3[10], int s1, int s2)
{
	int i=0, j=0, k=0;
	while(i<s1 && j<s2)
	{
		if(p1[i].exp==p2[i].exp)
		{
			p3[k].coeff = p1[i].coeff + p2[i].coeff;
			p3[k].exp = p1[i].exp;
			i++; j++; k++;
		}

		else if(p1[i].exp>p2[i].exp)
		{
			p3[k].coeff = p1[i].coeff;
			p3[k].exp = p1[i].exp;
			i++; k++;
		}

		else
		{		
			p3[k].coeff = p2[j].coeff;
			p3[k].exp = p2[j].exp;
			j++; k++;		
		}
	}

	while(i<s1)
	{
			p3[k].coeff = p1[i].coeff;
		p3[k].exp = p1[i].exp;
		i++; k++;
	}

	while(j<s1)
	{
		p3[k].coeff = p2[j].coeff;
		p3[k].exp = p2[j].exp;
		j++; k++;
	}

	
	return k;
}

int main()
{
	int s1, s2, s3;
	s1 = read(p1);
	s2 = read(p2);
	
	printf("\nFirst polynomial: ");
	display(p1, s1);

	printf("\nSecond polynomial: ");
	display(p2, s2);
	
	s3 = add(p1,p2,p3,s1,s2);
	printf("\nResultant polynomial: ");
	display(p3, s3);
	printf("\n");
	
	return 0;
}
