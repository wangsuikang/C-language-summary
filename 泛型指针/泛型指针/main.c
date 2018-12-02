//
//  main.c
//  泛型指针
//
//  Created by 王岁康 on 2018/12/1.
//  Copyright © 2018 王岁康. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //泛型指针：指可以保存任何空间类型的指针
    int a = 5;
    long l = 10;
    char c = 'a';
    void * p = &a;
    p = &l;
    p = &c;
    //1.任意类型的空间地址都可以放入泛型指针变量，可以任意空间类型
    //不能直接去*p
    //printf("*p:%C\n",*p);
    printf("*p:%c\n",*(char *)p);
    
    //泛型指针值可以赋值给任意类型指针变量吗？泛型指针和其他指针相互转化???
    void *p1 = NULL;
    float f = 4.14;
    p1 = &f;
    float *d = p1;
    float e = *d;
    return 0;
}
