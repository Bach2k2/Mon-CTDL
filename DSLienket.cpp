#include <stdio.h>
#include <string.h>
typedef char infor1[25];
// infor1[x] == char x[25]
 
struct element//
{
	char ht[25];
	float cc;
	int cntc;
	element *next;		
};
typedef element *Node;
//
struct list
{

Node F;	//element *F;
};

void Create(list &l)//&F
{
	l.F=NULL;// Node dau tien cua danh sach
}
void Display(list l)
{
	Node p;
	p=l.F;
	while (p!=NULL)
	{
		printf("\n%s \t %0.2f %d ",p->ht,p->cc, p->cntc);
		p=p->next;
	}
}
// tao 1 cai node:
Node Them(infor1 x,float &y,int &z)
{
	Node p= new element;
	strcpy(p->ht,x);
	p->cc=y;
//	z=y*100-105;
	p->cntc=z;
	p->next=NULL;
	return p;
}
// them vo dau
void Themvaodau(list &l,Node p)
{
	if (l.F==NULL)
	{
		l.F=p;
	}
	else 
	{
		p->next=l.F;
		l.F=p;
	}
}
void Insert(list &l,Node p,infor1 x,float y, int z)
{
	Node before;
	Node after;
	strcpy(p->ht,x);
	p->cc=y;
	p->cntc=z;
	after=l.F;
	while ((after != NULL)&&strcmp(after->ht,p->ht)<0)
	{ before=after;
	after =after->next;
	}
	p->next=after;
	if (l.F==after) l.F=p;
	else before->next=p;
	
}
	int main()
	{
		list l;
		Create(l);
		char x[25];
		float y;
		int z;
		int i,n;
		printf("\nNhap n:");
		scanf("%d",&n);
		for (i=0;i<n;i++)
		{
			printf("\nNhap ten nguoi thu %d ",i+1);
			fflush(stdin);
			fgets(x,25,stdin);
			printf("\nNhap chieu cao:");
			scanf("%f",&y);
			z=y*100-105;
			Node p=Them(x,y,z);
			Themvaodau(l,p);
		}
		printf("\nNhap ten nguoi can them ",i+1);
			fflush(stdin);
			fgets(x,25,stdin);
			printf("\nNhap chieu cao:");
			scanf("%f",&y);
			z=y*100-105;
			Node k=new element;
			Insert(l,k,x,y,z);
	Display(l);
	}

