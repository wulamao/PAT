#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
//#include <Stack>
using namespace std;

typedef struct datetype
{
	int year;//struct members are adjacent to the others
	char month;
	char day;
}date; 

char year[5],month[3],day[3];

void dateup(date datex)
{
	//datex
}

void codeup_1928()
{
	date date1,date2; 
	char s1[9],s2[9];
	/*notice:return value of scanf()*/
	/*notice:gets() can read string with ' '*/
	//while(scanf("%c",&s[i++])!=EOF){break;};
	//sscanf()
	//--atoi()
	//while(1);
	
	gets(s1);//s1 must be initailized
	
	sscanf(s1  ,"%4s",year); 
	sscanf(s1+4,"%2s",month); 
	sscanf(s1+6,"%2s",day); 
	
	//puts(year);while(1);
		
	date1.year  = atoi(year);
	date1.month = atoi(month);
	date1.day   = atoi(day);
	
	gets(s2);//s2 must be initailized
	
	sscanf(s2  ,"%4s",year); 
	sscanf(s2+4,"%2s",month); 
	sscanf(s2+6,"%2s",day); 
		
	date2.year  = atoi(year);
	date2.month = atoi(month);
	date2.day   = atoi(day);
	
//	printf("%d %d %d\n",date1.year,date1.month,date1.day);
//	printf("%d %d %d\n",date2.year,date2.month,date2.day);
	
}

int main(int argc, char** argv) 
{
	//while(1)
	codeup_1928();
	return 0;
}


