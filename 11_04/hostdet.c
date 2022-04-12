
#include<stdio.h>
#include<netinet/in.h>
#include<netdb.h>
int main()
{
struct hostent *he = NULL;
char dotaddr[20];
//he = gethostbyname("196.12.100.100");
    he = gethostbyname("196.168.86.58"); 
    inet_ntop(AF_INET,he->h_addr_list,dotaddr,20);
    printf("address in dd notation = %s\n",dotaddr); 
    return 0;
}

