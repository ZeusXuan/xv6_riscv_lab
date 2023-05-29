#define O_RDONLY  0x000
#define O_WRONLY  0x001
#define O_RDWR    0x002
#define O_CREATE  0x200
#define O_TRUNC   0x400

#ifdef LAB_MMAP
// 表示映射区域的保护方式
#define PROT_NONE       0x0
#define PROT_READ       0x1
#define PROT_WRITE      0x2
#define PROT_EXEC       0x4

// 对映射区域的写入数据会写回文件内,而且允许其他映射该文件的进程共享
#define MAP_SHARED      0x01
// 对映射区域的写入操作不会写回原来的文件内容
#define MAP_PRIVATE     0x02
#endif
