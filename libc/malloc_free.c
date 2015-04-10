#include <sys/defs.h>
#include <sys/syscall.h>
#include <syscall.h>
#include <stdlib.h>


#define PROT_READ		0x1     /* Page can be read.  */
#define PROT_WRITE		0x2     /* Page can be written.  */
#define PROT_EXEC		0x4     /* Page can be executed.  */
#define PROT_NONE		0x0 
#define MAP_SHARED		0x01    /* Share changes.  */
#define MAP_PRIVATE		0x02    /* Changes are private.  */

#define MAP_FIXED		0x10    /* Interpret addr exactly.  */
#define MAP_FILE		0
#define MAP_ANONYMOUS	0x20 
#define MAP_FAILED 		((void*)(-1))


void* malloc(size_t size){
    char *a=mmap(NULL,size, PROT_EXEC|PROT_READ|PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS,-1,0);
    if(a == MAP_FAILED) {
    	return NULL;
    } else {
    	return a;
    }
}

void free(void *ptr){
	size_t length;
	length=sizeof(*ptr);
	munmap(ptr,length); 
}
