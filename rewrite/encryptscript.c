/*
	Compress/Encrypt Gameexe.dat from Rewrite
*/

#include <stdio.h>
#include <stdlib.h>
#include "compression.h"

// for when a decompression/compression size is stored in the encrypted data

int main(int argc, char **argv)
{
	FILE *infile = NULL, *outfile = NULL;
	unsigned char *buffer = NULL, *output = NULL;
	int complen=0, i=0, size=0;
	
	if(argc!=3)
	{
		printf("usage: %s infile outfile\n",argv[0]);
		return 0;
	}
	
	infile = fopen(argv[1],"rb");
	if(!infile)
	{
		printf("Could not open %s\n",argv[1]);
		return -1;
	}
	
	outfile = fopen(argv[2],"wb");
	
	fseek(infile,0,SEEK_END);
	size = ftell(infile);
	rewind(infile);
	
	buffer = (unsigned char*)calloc(size,sizeof(unsigned char));
	fread(buffer,1,size,infile);
	fclose(infile);
	
	output = CompressData(buffer,size,&complen);
	
	printf("Compressed %d bytes into %d bytes\n",size,complen);
	
	for(i=0; i<complen; i++)
		output[i] ^= scrkey[i&0xff];
	
	fwrite(output, 1, complen, outfile);
	free(buffer);
	free(output);
	fclose(outfile);

	return 0;
}
