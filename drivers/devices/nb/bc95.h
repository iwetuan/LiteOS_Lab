#ifndef __NB_NEUL_BC95_H__
#define __NB_NEUL_BC95_H__

#include "at_api_interface.h"

//#define CLOUD_IP  "218.4.33.71,5683"
#define AT_NB_LINE_END 			"\r\n"

#define AT_NB_reboot    		"AT+NRB\r"
#define AT_NB_hw_detect    		"AT+CFUN?\r"
#define AT_NB_get_auto_connect    		"AT+NCONFIG?\r"
#define AT_CMD_PREFIX      "+NNMI:"

#define AT_MODU_NAME    	"nb_neul95"
#define AT_USART   			USART3
#define AT_BUARDRATE   		9600
#define AT_USART_IRQn   	USART3_IRQn
#define AT_CMD_TIMEOUT		10000    //ms
#define AT_MAX_LINK_NUM     4
#define MAX_AT_USERDATA_LEN 2048

#define NB_STAT_LOCALPORT 56
#define AT_LINE_END 		"\r\n"
#define AT_CMD_BEGIN		"\r\n"
#define AT_DATAF_PREFIX      "+NSONMI"
#define MAX_SOCK_NUM 5
typedef struct _remote_info_t
{
    int socket;
    unsigned short port;
    char ip[16];
}remote_info;//��������socketʱ��Ҫ��struct����


int str_to_hex(const char *bufin, int len, char *bufout);
int32_t nb_set_cdpserver(char* host, char* port);
int32_t nb_hw_detect(void);
int32_t nb_get_netstat(void);
int nb_query_ip(void);
int32_t nb_send_payload(const char* buf, int len);
int32_t nb_send_psk(char* pskid, char* psk);
int32_t nb_reboot(void);

#endif