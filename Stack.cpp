#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
typedef char infor1[25];
typedef float infor2;
typedef int infor3;
struct element
{
	infor1 ht;
	infor2 cc;
	infor3 cntc;
	element* Next;
};
typedef element* Stack;
Stack S;

void Tao(Stack& s)
{
	s = NULL;
}
Stack Them(char x[], float y, int z)
{
	Stack p;
	strcpy((*p).ht, x);
	(*p).cc = y;
	(*p).cntc = z;
	(*p).Next = NULL;
	return p;
}
void Display(Stack S)
{
	cout<< "\n In ra danh sach";
	Stack p;
	p = S;
	while (p != NULL)
	{
		printf("\n %15s %7.2f %7d", (*p).ht, (*p).cc, (*p).cntc);
		p = (*p).Next;
	}

}

void Insert1st(Stack& S, char x[], float y, int z)
{
	Stack p;
	p=new element;
	strcpy((*p).ht, x);
	(*p).cc = y;
	(*p).cntc = z;
	(*p).Next = S;
	S = p;
}
void Delete1st(Stack& S)
{
	Stack p= new element;
	if (S != NULL)
	{
		
		p = S;
		S=p->Next;
		delete p;
	}
}
int main()
{
	int i, n;
	char x[25]; float y; int z;
	Tao(S);
	printf("\n Nhap n:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("\n Nhap ten %d", i);
		rewind(stdin);
		gets(x);
		printf("\n Nhap chieu cao");
		scanf("%f",&y);
		z = y*100 - 105;
		Insert1st(S, x, y, z);
	}
	Display(S);
	int check;
	printf("\n Nhap lua chon:");
	scanf("%d", &check);
	printf("\n Muon xoa thi nhan phim 2");
	if (check == 2){ Delete1st(S);
	system("pause");
	Display(S);}
	return 0;
	
}
