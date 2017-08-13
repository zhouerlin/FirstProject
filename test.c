#include <string.h>
#include <stdio.h>
#include <getopt.h>

#include <Winsock2.h>
#include <inet.h>

#include <stdio.h>

typedef struct addr {
  union {
	    struct {
	      char s_b1,s_b2,s_b3,s_b4;
	    } S_un_b;
	    
		struct {
	      short s_w1,s_w2;
	    } S_un_w;
	    
		long S_addr;
  } S_un;
}addr;

int main()
{
	addr ipAddr;
	
	ipAddr.S_un.S_addr = inet_addr("127.0.0.1"); //将字符串形式的IP地址转换为按网络字节顺序的整形值
	
	printf("\n%u", ipAddr.S_un);
	
	return 0;
}

