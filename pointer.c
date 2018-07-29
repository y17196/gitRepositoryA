#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void deblank(char string[]);
void print(char **str);
char *find_char(char const *src, char const *chars);
int del_substr(char *str, char const *substr);
void reverse_string(char *string);

int main()
{
	char *str0 = "abcdef gh   hi    mn!!!";
	deblank(str0);
	
	char *str1[10] ={"abcd", "cdbe", "abcd", "abcd", "efg", "efg", "mngh", "finish", NULL};
	print(str1);
   
	return 0;
}


void deblank(char string[])
{
	char *str1 = string, *str = (char *)malloc(sizeof(char)*100);
	char *str2 = str;
	int n = 0;
	
	while (*str1 != '\0')
	{
		if (*str1 != ' ')
		{
			*str2++ = *str1;
			n = 0;		
		}
		else
		{
			n++;
			if (n == 1)
			{
				*str2++ = *str1;
			}			
		}		
		str1++;
	}	
	*str2 = '\0';
	printf("%s\n", str);
	free(str);
}


void print(char **str)
{
	char **pstr = str;
	char previous[10] = {0};                                             
	int n = 0, i = 0;
	
	while (*(pstr + i) != NULL)
	{
		if (strcmp(*(pstr + i), previous) != 0)
		{
			strcpy(previous, *(pstr + i));
			printf("%d\n", i);
		}
		else
		{
			n++;
			if (n == 1)
			{
				puts(*(pstr + i));
			}
		}
		
		i++;
	}
}
