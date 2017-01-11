#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
//#include <Stack>
//#include <windows.h>
using namespace std; 

typedef struct datetype
{
	int year;//struct members are adjacent to the others
	char month;
	char day;
}date; 

char year[5],month[3],day[3];
date *maxDate,*minDate;

void dateup(date *datex)
{
	datex->day++;
	
	if(datex->year%4==0 && datex->month==2)
	{
		if(datex->day==30)
		{
			datex->month++;
			datex->day=1;
		}
	}
	else if(datex->year%4!=0 && datex->month==2)
	{
		if(datex->day==29)
		{
			datex->month++;
			datex->day=1;
		}
	}
	else
	{
		switch(datex->month)
		{
			case 1:case 3:case 5:
			case 7:case 8:case 10:
			case 12:
			{
				if(datex->day==32)
				{
					datex->month++;
					datex->day=1;
					if(datex->month==13)
					{
						datex->year++;
						datex->month=1;
						datex->day=1;
					}
				}
			}break;	
			case 4:case 6:
			case 9:case 11:
			{
				if(datex->day==31)
				{
					datex->month++;
					datex->day=1;
					if(datex->month==13)
					{
						datex->year++;
						datex->month=1;
						datex->day=1;
					}	
				}
			}break;	
		}	
	}
	//Sleep(500);
	//printf("%d %d %d\n",datex->year,datex->month,datex->day);
}

bool judge_date(date* date1,date* date2)
{
	bool equDate=0;
	if(date1->year>date2->year)
	{
		maxDate = date1;
		minDate = date2;
	}	
	else if(date1->year<date2->year)
	{
		maxDate = date2;
		minDate = date1;
	}
	else if(date1->month>date2->month)
	{
		maxDate = date1;
		minDate = date2;
	}
	else if(date1->month<date2->month)
	{
		maxDate = date2;
		minDate = date1;
	}
	else if(date1->day>date2->day)
	{
		maxDate = date1;
		minDate = date2;
	}
	else if(date1->day<date2->day)
	{
		maxDate = date2;
		minDate = date1;
	}	
	else
		equDate =1;
		
	if(equDate) return 0;
	else return 1;
}
 
void codeup_1928()
{
	date date1,date2; 
	char s1[9],s2[9];
	int num=0;
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
	
	while(judge_date(&date1,&date2))
	{
		num++;
		dateup(minDate);
		//printf("%d\n",num);
	}
	printf("%d\n",num+1);
//	printf("%d %d %d\n",date1.year,date1.month,date1.day);
//	printf("%d %d %d\n",date2.year,date2.month,date2.day);
	
}

int main(int argc, char** argv) 
{
	//while(1)
	codeup_1928();
	return 0;
}


