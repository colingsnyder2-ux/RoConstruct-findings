// from server: 60% by atomic.potato
extern void G1_func_00661b70();

struct S
{
    void f(int value, int* output);
};

void S::f(int value, int* output)
{
    if (value != 4)
    {
        G1_func_00661b70();
        return;
    }

    *output = 0x00bbc470;
    ((unsigned char*)output)[4] = 0;
    ((unsigned char*)output)[5] = 0;
}
