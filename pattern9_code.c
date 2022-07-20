/* Enter the number 5
 * Output
1
4 9
16 25 36
49 64 81 100
121 144 169 196 225
*/


#include<stdio.h>
int main()
{
	int n,i,j,c=1;
	printf("Enter the  Number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",c*c);
			c++;
		}
		printf("\n");
	}
	return 0;
}
