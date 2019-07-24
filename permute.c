#include <stdio.h> //
#include <ctype.h> // include neccessary libraries
#include <string.h>//
reverse(char[],int,int);// declare function prototype used
rev_arr_no(int[],int,int);

main()
{
	char arr[8]; int l;
	up:printf("Enter any 1 to 7 letter words\n");
	for(l=0;(arr[l]=getchar()) != '\n'; ++l)
		if(l==7)goto up;
	arr[l]='\0'; printf("%10s",arr);
	int fac=l; int a=fac;
	for(int j=1;j<l;++j)
	fac = fac *--a;
	int ar[fac-1];rev_arr_no(ar,fac,l);
	for(int j=0;j<=(fac-2);++j)
	{
		reverse(arr,ar[j],l);printf("%10s",arr);
	}
}

reverse(char arr[],int k, int l)
{
	int r=l+1;char g[k+1]; g[k]='\0';
	strncpy(g,arr,k); int x=(l-k)+1;
	char f[x];f[x-1]='\0';
	for (int v=(x-2);v>=0;--v)
	{
		f[v]=arr[k];++k;
	}
	strcat(g,f);strcpy(arr,g);
}

rev_arr_no(int ar[],int fac, int l)
{
	int a=2; int b=1; int c=1;
	for(int z=(l-2);z>=0;--z)
	{
		for(int j=(c-1);j<=(fac-2);j+=a)
		{   ar[j]=z;
		}
		if(b<=1)
			a=2;
		else a *=(b+1);
		++b;
		c=a;
	}
}
