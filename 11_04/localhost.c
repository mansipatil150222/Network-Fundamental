#include<stdio.h>
#include<limits.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
char hostname[HOST_NAME_MAX +1]; //HOST_NAME_MAX 64(fixed size) hostname[HOST_NAME_MAX] = 0;
if(gethostname(hostname,HOST_NAME_MAX) ==0)
puts(hostname);
else
perror("gethostname");
return 0;
}

