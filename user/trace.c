#include "kernel/param.h"
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int i;
  char *nargv[MAXARG];

  // 至少两个参数,一个mask,一个command
  if(argc < 3 || (argv[1][0] < '0' || argv[1][0] > '9')){
    fprintf(2, "Usage: %s mask command\n", argv[0]);
    exit(1);
  }

  // atoi将字符串转化为数字
  if (trace(atoi(argv[1])) < 0) {
    // argv[0]将存储错误信息
    fprintf(2, "%s: trace failed\n", argv[0]);
    exit(1);
  }
  // 将command存储在nargv数组中
  for(i = 2; i < argc && i < MAXARG; i++){
    nargv[i-2] = argv[i];
  }
  // 使用exce调用该command
  exec(nargv[0], nargv);
  exit(0);
}
