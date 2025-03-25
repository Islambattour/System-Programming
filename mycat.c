
 #include <fcntl.h>
 #include <stdio.h>
 #include <unistd.h>
 #include <stdlib.h>

#define MYCOUNT	100


int main(int argc, char* argv[])
{
	char  mybuf [MYCOUNT];

	int fd= open(argv[1] , O_RDONLY);

	if(fd<0)		//error happened
	{
	
		printf("couldn't open the file\n");
		exit(-2);
	}

	int read_num;
	   
        while((read_num = read(fd,mybuf,MYCOUNT))>0)
	{
		if( write(1,mybuf,MYCOUNT) < 0 )
		{
			printf("write failed\n");
			exit(-3);		

		}

		
	
	}


		close(fd);
	return 0;

}
