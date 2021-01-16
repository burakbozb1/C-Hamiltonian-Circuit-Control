/*
Created by Burak Boz
13.01.2021
*/

#include <stdio.h>

int main()
{
	int n;
	int i =0,j=0;
	printf("N degeri girin:");
	scanf("%d",&n);
	int yol[n];
	int matris[n][n];	
	printf("Komsuluk matrisini girin:\n");
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<n;j++)
		{
			printf("komsuluk[%d][%d]: ",i,j);
			scanf("%d",&matris[i][j]);
		}
	}
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<n;j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	printf("***Yol, ilk dugum 0. dugum olacak sekilde girilmelidir.\n");
	for(i=0;i<n;i++)
	{
		printf("Yolu girin:");
		scanf("%d",&yol[i]);
	}
	int kontrol = 0;
	i=0;
	while(i<n && kontrol ==0)
	{
		if(i==n-1)
		{
			if(matris[yol[i]][yol[0]]==0)
			{
				kontrol =1;
			}
		}
		else if(i<n)
		{
			if(matris[yol[i]][yol[i+1]]==0)
			{
				kontrol =1;
			}
		}
		i++;
	}
	if(kontrol == 0)
	{
		printf("Hamiltonian Circuit olusturuldu\n");
	}
	else{
		printf("Hamiltonian Circuit olusturulAMAdi\n");
	}
	
	
	return 0;
}
