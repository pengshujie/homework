#include "ch1.h"

int main(void){
	struct utsname uts;
	char hostname[MAXHOSTNAMELEN];
	size_t size = MAXHOSTNAMELEN;
	if(gethostname(hostname,size)!=0){
		err_exit("Could not get hostname");
	}
	printf("hostname=%s\n",hostname);

	if(uname(&uts) < 0){
		err_exit("Could not get  host informat\n");
	}
	printf("System is %s on %s hardware\n",uts.sysname, uts.machine);
	printf("Nodename is %s\n",uts.nodename);	
	printf("Release is %s, Version is %s\n",uts.release, uts.version);
	return 0;
}
