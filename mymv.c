#include <fcntl.h>
 #include <stdio.h>
 #include <unistd.h>
 #include <stdlib.h>

#define MYCOUNT	1000										


/*simple move utility for noe only support moving file to a file*/


int main(int argc, char* argv[])
{
	char  mybuf [MYCOUNT];

	int fd= open(argv[1] , O_RDONLY);

	if(fd<0)		//error happened
	{
	
		printf("couldn't open the file\n");
		exit(-2);
	}




	int fdout=open(argv[2], O_CREAT|O_WRONLY|O_TRUNC ,0644);


	int read_num=0;
	   
        while((read_num = read(fd,mybuf,MYCOUNT))>0)
	{
		if( write(fdout,mybuf,read_num) != read_num )
		{
			printf("write failed\n");
			exit(-3);		

		}

		
	
	}

	        close(fd);
                close(fdout);

        if(unlinkat(AT_FDCWD, argv[1], 0)<0)
        {

                printf("error during deleting");
                exit(-4);
        }
	

}

