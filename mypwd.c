

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char * argv[])
{

	char buf[100];

	char * ret = getcwd(buf , 100);
	

		for (int i=0; ret[i] !='\0' ; i++)
		printf("%c",ret[i]);
	
}


