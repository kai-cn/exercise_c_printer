#include<stdio.h>

int func(double d)
{
    printf("print d: %f\n",d);

    return 1;
}

int main(void)
{
    int (*func_p)(double);

    int (*func_table[])(double) = {
        func,
        func,
        func,
        func,
    };

    func_p = func;

    func_p(0.5);

    for(int i = 0;i<4;i++)
    {
        func_table[i](i);
    }

    return 0;
}