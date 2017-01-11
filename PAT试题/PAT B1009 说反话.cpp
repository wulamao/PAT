#include <iostream>
#include <cstring>
//#include <Stack>
using namespace std;

void PAT_1009()
{
	char s[90],p[90][90];
	int i=0,j=0,k=0; 
	/*notice:return value of scanf()*/
	/*notice:gets() can read string with ' '*/
	//while(scanf("%c",&s[i++])!=EOF);
	
	gets(s);
	for(;s[i]!='\0';i++)
	{
		if(s[i]!=' ')
			p[j][k++] = s[i];
		else
		{
			j++;k=0;	
		}	
	}
	
	for(i=0;i<=j;i++)
	{
//		puts(p[i]);
		printf("%s",p[j-i]);
		if(i!=j)
			printf(" ");
	}	


}

int main(int argc, char** argv) 
{
	//while(1)
	PAT_1009();
	return 0;
}


