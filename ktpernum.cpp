#include<stdio.h>
#include<math.h>
bool pfnum(unsigned int n)
{
	int i,sum=0;
	for(i=1;i<n;i++){	
	if (n%i==0) sum+=i;// Do phuc tap la O(n);
}
if (n==sum) return true;
else return false;
}
int main()
{
	int n;
	printf("\nNhap n ");
	scanf("%d",&n);
	if (pfnum(n)==true) printf("\n%d la so hoan hao",n);
	else printf("\nNo");
}
