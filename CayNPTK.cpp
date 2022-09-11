#include<stdio.h>
#include <math.h>
struct Data 
{
	int data;
};
struct element
{
 char ten[10];
 element *left;
 element *right;	
};
typedef element *Tree;
//Tree Search(Tree T,Data x)
//{
//	if (T)
//	{
//		if (T->Key.data==x.data) return T;
//		else if(T->Key.data>x.data) return Search(T->right,x);
//		else { return Search(T->left,x);
//		}	
//	}
//	return NULL;
//}
void Create(Tree &T)
{
	T=NULL;
}
void Themvaocay(Tree& T,char x[])
{
	
	if (T == NULL) {
		Tree node = new element;
		node->ten=x;
		node->left = NULL;
		node->right = NULL;
		T = node;
	}
	else {
		if (strcmp(T))
		{
			Themvaocay(T->left, x);
		}
		else Themvaocay(T->right,x);

	}
}
void DuyetTruoc(Tree &T)
{
	if (T)
	{
		printf("%c",T->ten);
		DuyetTruoc(T->left);
		DuyetTruoc(T->right);
	}
}
void DuyetGiua(Tree &T)
{
	if (T)
	{
		DuyetGiua(T->left);
		printf("%c",T->ten);
		DuyetGiua(T->right);
	}
}
void DuyetSau(Tree &T)
{
	if (T)
	{
		DuyetSau(T->left);
		DuyetSau(T->right);
		printf("%c",T->ten);
	}
}
int main()
{
	Tree T;
	int i,n;
    Data y;
    char x;
	printf("\n So nut can nhap");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("\nNhap du lieu can them lan %d ",i);
		fflush(stdin);
		scanf("%c",&x);
		Themvaocay(T,x);
	}
	int check;
	scanf("%d",&check);
	if (check==1) DuyetTruoc(T);
	else if (check==2)DuyetGiua(T);
	else //if (check ==3)
	DuyetSau(T);
//	if (check==4) 
//	{
//		Tree p=new element;
//		printf("\nNhap gt tim kiem");
//		scanf("%d",&y);
//		p=Search(T,y);
//		//printf("%d",p->Key.data);
//	}
}
