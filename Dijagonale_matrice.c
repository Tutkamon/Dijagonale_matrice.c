#include <stdio.h>
#define MAX 5
void restart(int m,char matrica[m][m])
{
	int k,l;
	for(k=0;k<m;++k)
	{
		for(l=0;l<m;++l)
		 matrica[k][l] = '.';
	}
}

void main()
{
	int i,j,n,k,a,b;
	
	//Unos velicine matrice
	while(1)
	{
		printf("Unesite velicinu kvadratne matrice(max=%d): ",MAX);
		scanf("%d",&n);
		if(n<=MAX)
			break;
		else if(n<=0)
			printf("Velicina matrice mora biti prirodan broj.\n",MAX);
		else
			printf("Maksimalna vrednost je %d.\n",MAX);
	}
	
	char niz[n][n], niz1[n][n];
	
	printf("\nVizuelno predstavljanje matrice:\n\n");
	for(i=0;i<n;++i)
	{
		printf("\t\t");
		for(j=0;j<n;++j)
		{
			niz1[i][j] = '0';
			niz[i][j] = 'a' + i*n+j;
			printf("%c ",niz[i][j]);
		}
	   printf("\n");	 
	}
	restart(n,niz1);
	
	printf("\nGlavna dijagonala:\n\n");
	for(i=0;i<n;++i)
	{
		printf("\t\t");
		for(j=0;j<n;++j)
		{
			if(i==j)
			 niz1[i][j] = niz[i][j];
			printf("%c ",niz1[i][j]);				 			  
		} 
		printf("\n");
	}
	restart(n,niz1);
	
	printf("\nSporedna dijagonala:\n\n");
	for(i=0;i<n;++i)
	{
		printf("\t\t");
		for(j=0;j<n;++j)
		{
			if(j==n-i-1)	
			 niz1[i][j] = niz[i][j];		
			printf("%c ",niz1[i][j]);
		}
		printf("\n");
	}
	restart(n,niz1);
	
	printf("\nPovrsina iznad glavne dijagonale :\n\n");
	for(i=0;i<n;++i)
	{
		printf("\t\t");
		for(j=0;j<n;++j)
		{
			if(j>i)
			 niz1[i][j] = niz[i][j];
				
		  printf("%c ",niz1[i][j]);	
		}
	    printf("\n");	
	}
	restart(n,niz1);
	
	printf("\nPovrsina ispod glavne dijagonale :\n\n");
	for(i=0;i<n;++i)
	{
		printf("\t\t");
		for(j=0;j<n;++j)
		{
			if(i>j)
			 niz1[i][j] = niz[i][j];
		    printf("%c ",niz1[i][j]);	 
		}
		printf("\n");
	}
	restart(n,niz1);
	
	printf("\nPovrsina iznad sporedne dijagonale :\n\n");
	for(i=0;i<n;++i)
	{
		printf("\t\t");
		for(j=0;j<n;++j)
		{
			if(n-i-1>j)
			 niz1[i][j] = niz[i][j];
		    printf("%c ",niz1[i][j]);	 
		}
		printf("\n");
	}
	restart(n,niz1);
	
	printf("\nPovrsina ispod sporedne dijagonale :\n\n");
	for(i=0;i<n;++i)
	{
		printf("\t\t");
		for(j=0;j<n;++j)
		{
			if(j>n-i-1)
			 niz1[i][j] = niz[i][j];
			printf("%c ",niz1[i][j]); 	
		}
		printf("\n");
	}
	
	printf("\n");
	getchar();getchar();
}
