#include<stdio.h>

int simiplify1(int i,int j);
int simiplify2(int i,int j);
int max(int i,int j);
int main(void){
    int a,b,n,m;
    double mid1,mid2,plu,sub,mul,div;
    printf("please input 1st fraction:");
    scanf("%d" , &m);
    scanf("%d" , &n);
    printf("please input 2nd fraction:");
    scanf("%d" , &a);
    scanf("%d" , &b);

    mid1=n*b; mid2=a*n;plu=b*m+a*n; sub=b*m-a*n; mul=a*m; div=b*m;

    printf("plus final outout:%d %d\n" ,simiplify1(plu,mid1),simiplify2(plu,mid1));
    printf("plus final outout:%d %d\n" ,simiplify1(sub,mid1),simiplify2(sub,mid1));
    printf("plus final outout:%d %d\n" ,simiplify1(mul,mid1),simiplify2(mul,mid1));
    printf("plus final outout:%d %d\n" ,simiplify1(div,mid2),simiplify2(div,mid2));

    _getch();
    return 0;
}

int simiplify1(int i,int j){
    int n;
	for(n=max(i,j);n>1;n--)
	{
		if((i%n==0)&&(j%n==0))
		{
			i=i/n;
			j=j/n;
		}
	}

    return i;
}

int simiplify2(int i,int j){
    int n;
	for(n=max(i,j);n>1;n--)
	{
		if((i%n==0)&&(j%n==0))
		{
			i=i/n;
			j=j/n;
		}
	}

    return j;
}

int max(int i,int j){
    if(i <= j){
        return j;
    }
    else{
        return i;
    }
}