#include<stdio.h>
#include"static_test_1.c"




void print_static_test_2()
{
    static int static_test = 2;
    printf("static_test_2: %d\n",static_test);
}

int main(void)
{
    print_static_test_2();
    print_static_test_1();

    return 0;
}