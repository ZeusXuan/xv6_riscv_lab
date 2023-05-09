# include "kernel/types.h"
# include "user/user.h"


int
main(int argc, char **argv)
{
    // 当参数不为1时
    if(argc != 2){
        fprintf(2,"usage: sleep time\n");
        exit(1);
    }
    sleep(atoi(argv[0]));
    fprintf(1,"sleep success\n");
    exit(0);
}