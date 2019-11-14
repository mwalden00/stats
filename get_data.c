#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	printf("\nMaking a stat struct from path ./program\n");

	struct stat buf;
	stat("./program", &buf);

	printf("File Mode:\t\t");
	// I recieved assistance for this part, I just learned the ? : syntax
    printf( (S_ISDIR(buf.st_mode)) ? "d" : "-");
    printf( (buf.st_mode & S_IRUSR) ? "r" : "-");
    printf( (buf.st_mode & S_IWUSR) ? "w" : "-");
    printf( (buf.st_mode & S_IXUSR) ? "x" : "-");
    printf( (buf.st_mode & S_IRGRP) ? "r" : "-");
    printf( (buf.st_mode & S_IWGRP) ? "w" : "-");
    printf( (buf.st_mode & S_IXGRP) ? "x" : "-");
    printf( (buf.st_mode & S_IROTH) ? "r" : "-");
    printf( (buf.st_mode & S_IWOTH) ? "w" : "-");
    printf( (buf.st_mode & S_IXOTH) ? "x" : "-");

	printf("\nFile size: \t\t%d Bytes\n", buf.st_mode - 32768);

	printf("Time last modified: \t%s\n", ctime(&buf.st_mtime));

	return 0;
}