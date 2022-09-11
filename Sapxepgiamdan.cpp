#include<stdio.h>
#include<math.h>
// Giam dan theo PP chon
void PP_chon(int A[],int n)
{
	int i,j;
	int vt=0,temp;
	
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (A[i]<A[j]) {
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
}
// Giam dan theo PP chen
void PP_chen(int a[],int n)
{
	int i,j,x;
	for (i=1;i<n;i++)
	{	 x=a[i];j=i-1;
		while(j>=0&&x>a[j])
		{
		
		a[j+1]=a[j];
		j--;
	}
		a[j+1]=x;
	}

}
// PP noi bot
void Bubblesort(int a[],int n)
{
	int i,j,temp;
	for (i=0;i<n-1;i++)
	{
		for (j=n-1;j>=i+1;j--)
		{
			if (a[j-1]<a[j]) {
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
		}	
}
void xuat(int A[],int n)
{
	for (int i=0;i<n;i++)
	printf("%d\t",A[i]);
}
int main()
{
	int i,n,A[20];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("\n Nhap cac so %d: ",i);
		scanf("%d",&A[i]);
	}
	Bubblesort(A,n);
	xuat(A,n);
}
