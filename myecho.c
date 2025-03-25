

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

