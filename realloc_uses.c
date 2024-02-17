#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *str;
	int _size1,_size2;
	str = (char *)malloc(10);
	if (str==0)
	{
		printf("\n Memory could not be allocated.");
		exit(1);
	}	
		strcpy(str,"Hi");
		_size1 = sizeof(str);
		printf("\n Str = %s and size of var = %d",str,_size1);
		
		str = (char *)realloc(str,20);
	if (str==0)
	{
		printf("\n Memory could not be allocated.");
		exit(1);
	}	
		printf("\n Str size modified\n");
		printf("\n Str = %s\n",str);
		strcpy(str,"Hi there");
		_size2 = sizeof(str);
		printf("\n Str = %s and size of var = %d",str,_size2);
		
		free(str);
		return 0 ;
}
