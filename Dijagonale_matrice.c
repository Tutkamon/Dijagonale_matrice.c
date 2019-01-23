#include <stdio.h>

void restart(int m,char matrica[m][m])
{
	int k,l;
	for(k=0;k<m;++k)
	{
		for(l=0;l<m;++l)
		 matrica[k][l] = '0';
	}
}

void main()
{
	int i,j,n,k;
	int a,b;
	int broj = 0;
	printf("Unesite velicinu kvadratne matrice ");
	scanf("%d",&n);
	char niz[n][n];
	char niz1[n][n];
	printf("\nVizuelno predstavljanje matrice:\n\n");
	for(i=0;i<n;++i)
	{
		printf("\t\t");
		for(j=0;j<n;++j)
		{
			niz1[i][j] = '0';
			niz[i][j] = 'a' + broj;
			printf("%c ",niz[i][j]);
			++broj;
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
	int Do_Not_Close;
	printf("\n");
	scanf("%d",&Do_Not_Close);	
}
