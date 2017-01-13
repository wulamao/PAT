#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
//#include <Stack>
//#include <windows.h>
using namespace std; 

void codeup_5901()
{
	char s[255];
	int len,i=0;
	/*notice:return value of scanf()*/
	/*notice:gets() can read string with ' '*/
	//while(scanf("%c",&s[i++])!=EOF){break;};//input more items data
	//sscanf()
	//--atoi()
	//while(1);
	
	gets(s);//s1 must be initailized
	len=strlen(s)-1;
	while(s[i++]==s[len--])
	{
		if(i>len)
		{
			printf("YES\n");break;
		}
	}
	if(i<len)
	{
		printf("NO\n");
	}
	
//	
	
}

int main(int argc, char** argv) 
{
	//while(1)
	codeup_5901();
	return 0;
}


