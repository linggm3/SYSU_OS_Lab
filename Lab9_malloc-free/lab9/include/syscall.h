#ifndef SYSCALL_H
#define SYSCALL_H

#include "os_constant.h"

class SystemService
{
public:
    SystemService();
    void initialize();
    // 设置系统调用，index=系统调用号，function=处理第index个系统调用函数的地址
    bool setSystemCall(int index, int function);
};

// 第0个系统调用
int syscall_0(int first, int second, int third, int forth, int fifth);

// 第1个系统调用, write
int write(const char *str);
int syscall_write(const char *str);

// 第2个系统调用, fork
int fork();
int syscall_fork();

// 第3个系统调用, exit
void exit(int ret);
void syscall_exit(int ret);

// 第4个系统调用, wait
int wait(int *retval);
int syscall_wait(int *retval);

// 第5个系统调用, move cursor
void move_cursor(int i, int j);
void syscall_move_cursor(int i, int j);

// malloc and free
int malloc(int bytes);
bool free(int addr, int bytes);

#endif
