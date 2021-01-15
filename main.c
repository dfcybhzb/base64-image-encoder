#include "header.h"


int main(int argc, char *argv[]) {
	FILE * fd;
	char * binary_image;

	binary_image = base64_encode(argv[1]);
	fd = fopen(argv[2], "w+");
	if (!fd) 
		exit(1);

	fprintf(fd, "%s", binary_image);

	fclose(fd);	

	return (1);
}
