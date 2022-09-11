#include <stdio.h>
#include <math.h>
struct element{
	char data;
	element *left;
	element *right;
};
typedef element *Tree;
Tree T;
void Create(Tree &T)
{
	T=NULL;
}
//void ThemNode(Tree &T,Tree &p)
//{
//if (T==NULL) T=p;
//else {
//	if (T->data>p->data) {
//		T->left=p;
//		T=p;
//	}
//	else if (T->data<p->data)
//	{
//		T->right=p;
//		T=p;
//	}
//}	
//}
Tree NODE(int x, Tree L, Tree R)
{ Tree p;
 p=new element;
 (*p).data=x; (*p).left=L; (*p).right=R;
 return p;
}
void DuyetTruoc(Tree T)
{ if (T != NULL)
{ printf("%c",(*T).data);
 DuyetTruoc( (*T).left );
 DuyetTruoc( (*T).right );
}
}
void DuyetGiua(Tree T)
{ if (T != NULL)
{ DuyetGiua( (*T).left );
 printf("%c",(*T).data);
 DuyetGiua( (*T).right );
}
}
void DuyetSau(Tree T)
{ if (T != NULL)
{ DuyetSau( (*T).left );
 DuyetSau( (*T).right );
 printf("%c",(*T).data);
}
}

int main()
{
Tree T;
Create(T);
int i,x,n;
scanf("%d",&n);
//for (i=0;i<n;i++)
//	{
//		printf("Nhap du lieu %d: ",i);
//		scanf("%d",&x);
//		Node(x,T->left,T->right);
//	}
Tree T1=NODE('G', NULL, NULL); 
Tree T2=NODE('D', NULL, T1);
Tree T3=NODE('B', T2, NULL);
Tree T4=NODE('H', NULL, NULL); 
Tree T5=NODE('I', NULL, NULL);
Tree T6=NODE('E', NULL, NULL); 
Tree T7=NODE('F', T4, T5);
Tree T8=NODE('C', T6, T7);
 T=NODE('A', T3, T8);
	DuyetTruoc(T);
	printf("\n");
	DuyetGiua(T);
	printf("\n");
	DuyetSau(T);	
}
