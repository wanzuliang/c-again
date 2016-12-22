#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
/* Linux 的默任个人的邮箱地址是 /var/spool/mail/用户的登录名 */
#define MAIL "/var/spool/mail/shiro"
/* 睡眠 10 秒钟 */
#define SLEEP_TIME 10

void main(void)
{
    pid_t child;
    if((child=fork())==-1)
    {
        printf("Fork Error:%s\n",strerror(errno));
        exit(1);
    }else if(child>0)
    while(1);

    if(kill(getppid(),SIGTERM)==-1)
    {
        printf("Kill Parent Error:%s\n",strerror(errno));
        exit(1);
    }

    {
        int mailfd;
        while(1)
        {
            if((mailfd=open(MAIL,O_RDONLY))!=-1)
            {
                fprintf(stderr,"%s","\007");
                close(mailfd);
            }
            sleep(SLEEP_TIME);
        }
    }

}
