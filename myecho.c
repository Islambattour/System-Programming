

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <unistd.h>



/*
 *
 calculate the total length"in bytes"of the input arguments including the   spaces and the new line at the end.

 allocate this total length of bytes to a buf using malloc.

 copy the arguments in bytes to the buf.

 pass the buf to the write function.
 *
 *
 * */



int main(int argc, char * argv[])
{
	
	int total=0;

	for(int i=1; i<argc; i++)
	{
		total+=strlen(argv[i]);

		//check space
		if(i<argc-1)
		{
			total+=1;
		}
	}

	total++;  // the new line character \n

	//allocate dynamic memory using this length
	
	char * buf = (char*) malloc(total);

	int j=0, len=0;

	for(int i=1; i<argc; i++)
	{
		len = strlen(argv[i]);

		memcpy(buf+j,argv[i],len);
		j+=len;			//the new position of the new argument	

		if(i<argc-1)
		{
			buf[j] = ' ';
			j++;
		}
	
	}

	buf[j] = '\n';

	write(1,buf,total);

	free(buf);

}





/*
 *
 *another simple solution but not achieving all test cases:




#include <unistd.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{

	for (int i=1; i<argc; i++)
	{
	
		if( write (1,argv[i],strlen(argv[i]) ) <0)
			
		{
			exit(-2);
		}

		if(i<argc-1)
		{
			write(1," " , 1);
		}
	}






return 0;
}


 *
 *
 *
 * */
