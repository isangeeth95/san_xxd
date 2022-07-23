#include <stdio.h>
int main()
{
	FILE *file;
	long curPos;

	char c;
	int start=0;
	int a,k=0;;
	long j,i,b;
	
	file = fopen ("index.txt", "r");

	if(file==NULL)
	printf("Error while openning the index.txt file");

	else
	{
	//find the lenght of the text in the file
	size_t pos=ftell(file);
	fseek(file,0,SEEK_END);
	size_t length=ftell(file);
	fseek(file, pos,SEEK_SET);

	//printf("Length : %lu", length);
	printf("\n");

		do
		{
		printf("%08x : ",start);

			//print the hexa values for each 16 character
			for(i=0; i<8; i++)
			{
				for(a=0; a<2; a++)
				{
				c=fgetc(file);
	
				if(c==EOF)
				break;
	
				else
				printf("%X",c);
				curPos=ftell(file);
				}
			printf(" ");
			}
	
			fseek(file,-16L,1);//change the pointer position backwords to print the characters

			printf(" ");

			//print the 16 characters for printed values	
			for(i=0; i<8; i++)
	                {
	                        for(a=0; a<2; a++)
	                        {
	                        c=fgetc(file);
	
	                        if(c==EOF)
	                        break;
	
	                        else
	                        printf("%c",c);
				curPos=ftell(file);
	                        }
	                }

		printf("\n");	
		k++;
		start+=16;
		}while(k<(length/16));
	}
	
	fclose(file);
 return 0;
}
