#ifndef __rvmm2_alt_H__
#define __rvmm2_alt_H__
#include "global.h"

#if GAME == MUVLUVALT
static int rvmm2_alt_length = 768;
static unsigned char rvmm2_alt_data[] =
{
	0x43, 0x55, 0x75, 0x63, 0x46, 0x69, 0x6c, 0x65, 0x4c, 0x69, 0x73, 0x74, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xa4, 0x07, 0x10, 
	0x00, 0x00, 0x00, 0x00, 0x2e, 0x50, 0x41, 0x56, 0x43, 0x45, 0x78, 0x63, 0x65, 0x70, 0x74, 0x69, 
	0x6f, 0x6e, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x4e, 0x6f, 0x77, 0x20, 0x4c, 0x6f, 0x61, 0x64, 
	0x69, 0x6e, 0x67, 0x2e, 0x2e, 0x2e, 0x00, 0x00, 0x43, 0x6f, 0x75, 0x6c, 0x64, 0x6e, 0x27, 0x74, 
	0x20, 0x72, 0x65, 0x61, 0x64, 0x20, 0x68, 0x65, 0x61, 0x64, 0x65, 0x72, 0x20, 0x69, 0x6e, 0x66, 
	0x6f, 0x72, 0x6d, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x4e, 0x65, 0x77, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x50, 0x6c, 0x65, 0x61, 0x73, 0x65, 0x20, 0x73, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x20, 0x61, 0x20, 
	0x73, 0x6c, 0x6f, 0x74, 0x20, 0x74, 0x6f, 0x20, 0x6c, 0x6f, 0x61, 0x64, 0x20, 0x66, 0x72, 0x6f, 
	0x6d, 0x00, 0x00, 0x00, 0x50, 0x6c, 0x65, 0x61, 0x73, 0x65, 0x20, 0x73, 0x65, 0x6c, 0x65, 0x63, 
	0x74, 0x20, 0x61, 0x20, 0x73, 0x6c, 0x6f, 0x74, 0x20, 0x74, 0x6f, 0x20, 0x73, 0x61, 0x76, 0x65, 
	0x20, 0x74, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x61, 0x76, 0x65, 0x00, 0x00, 0x00, 0x00, 
	0x25, 0x30, 0x34, 0x75, 0x09, 0x4e, 0x65, 0x77, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x81, 0x79, 0x25, 0x59, 0x20, 0x25, 0x6d, 0x2f, 0x25, 0x64, 0x20, 0x25, 
	0x48, 0x3a, 0x25, 0x4d, 0x81, 0x7a, 0x00, 0x00, 0x25, 0x30, 0x34, 0x75, 0x00, 0x00, 0x00, 0x00, 
	0x56, 0x6d, 0x72, 0x2a, 0x2e, 0x75, 0x75, 0x63, 0x00, 0x00, 0x00, 0x00, 0x50, 0x6c, 0x65, 0x61, 
	0x73, 0x65, 0x20, 0x65, 0x6e, 0x74, 0x65, 0x72, 0x20, 0x61, 0x20, 0x63, 0x6f, 0x6d, 0x6d, 0x65, 
	0x6e, 0x74, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x61, 0x76, 0x65, 
	0x00, 0x00, 0x00, 0x00, 0x25, 0x64, 0x20, 0x61, 0x6c, 0x72, 0x65, 0x61, 0x64, 0x79, 0x20, 0x65, 
	0x78, 0x69, 0x73, 0x74, 0x73, 0x2e, 0x20, 0x4f, 0x76, 0x65, 0x72, 0x77, 0x72, 0x69, 0x74, 0x65, 
	0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x3f, 0x0a, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x68, 0x65, 0x20, 0x70, 0x72, 0x69, 0x6f, 
	0x72, 0x69, 0x74, 0x79, 0x20, 0x6c, 0x65, 0x76, 0x65, 0x6c, 0x20, 0x69, 0x73, 0x20, 0x72, 0x65, 
	0x73, 0x74, 0x72, 0x69, 0x63, 0x74, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x68, 0x65, 0x20, 0x61, 0x62, 
	0x69, 0x6c, 0x69, 0x74, 0x79, 0x20, 0x74, 0x6f, 0x20, 0x73, 0x61, 0x76, 0x65, 0x20, 0x74, 0x6f, 
	0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x73, 0x6c, 0x6f, 0x74, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x6f, 0x75, 0x6c, 
	0x64, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x6f, 0x70, 0x65, 0x6e, 0x20, 0x73, 0x61, 0x76, 0x65, 0x20, 
	0x66, 0x69, 0x6c, 0x65, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x68, 0x65, 0x20, 0x70, 0x72, 0x69, 0x6f, 
	0x72, 0x69, 0x74, 0x79, 0x20, 0x6c, 0x65, 0x76, 0x65, 0x6c, 0x20, 0x69, 0x73, 0x20, 0x72, 0x65, 
	0x73, 0x74, 0x72, 0x69, 0x63, 0x74, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x68, 0x65, 0x20, 0x61, 0x62, 
	0x69, 0x6c, 0x69, 0x74, 0x79, 0x20, 0x74, 0x6f, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x20, 
	0x74, 0x68, 0x69, 0x73, 0x20, 0x73, 0x6c, 0x6f, 0x74, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x72, 0x65, 0x20, 
	0x79, 0x6f, 0x75, 0x20, 0x73, 0x75, 0x72, 0x65, 0x20, 0x79, 0x6f, 0x75, 0x20, 0x77, 0x61, 0x6e, 
	0x74, 0x20, 0x74, 0x6f, 0x20, 0x64, 0x65, 0x6c, 0x65, 0x74, 0x65, 0x20, 0x74, 0x68, 0x69, 0x73, 
	0x20, 0x66, 0x69, 0x6c, 0x65, 0x3a, 0x20, 0x25, 0x73, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x54, 0x68, 0x65, 0x20, 0x70, 0x72, 0x69, 0x6f, 0x72, 0x69, 0x74, 0x79, 0x20, 0x6c, 0x65, 0x76, 
	0x65, 0x6c, 0x20, 0x69, 0x73, 0x20, 0x72, 0x65, 0x73, 0x74, 0x72, 0x69, 0x63, 0x74, 0x69, 0x6e, 
	0x67, 0x20, 0x74, 0x68, 0x65, 0x20, 0x61, 0x62, 0x69, 0x6c, 0x69, 0x74, 0x79, 0x20, 0x74, 0x6f, 
	0x20, 0x64, 0x65, 0x6c, 0x65, 0x74, 0x65, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x73, 0x6c, 0x6f, 
	0x74, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x69, 0x67, 0x68, 
	0x20, 0x50, 0x72, 0x69, 0x6f, 0x72, 0x69, 0x74, 0x79, 0x28, 0x26, 0x50, 0x29, 0x00, 0x00, 0x00, 
	0x4c, 0x6f, 0x77, 0x20, 0x50, 0x72, 0x69, 0x6f, 0x72, 0x69, 0x74, 0x79, 0x28, 0x26, 0x50, 0x29, 
	0x00, 0x00, 0x00, 0x00, 0x46, 0x69, 0x6c, 0x65, 0x20, 0x64, 0x6f, 0x65, 0x73, 0x6e, 0x27, 0x74, 
	0x20, 0x65, 0x78, 0x69, 0x73, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0x6f, 0x20, 0x74
};
#endif
#endif
