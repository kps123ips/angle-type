#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the angles of a triangle");
	scanf("%d%d%d",&a,&b,&c);
	if(a<90 && b<90 && c<90)
	printf("It is an Acute angled Triangle");
	else if(a>90 || b>90 || c>90)
	printf("It is an obtuse angled Triangle");
	else if(a==90 || b==90 ||c==90)
	printf("It is a Right Angled Triangle");
}
