// from server: 83% by atomic.potato
extern "C" void G1_func_00926442();
extern "C" void G1_func_00814760();

struct S_func_00814800
{
    int f(int value);
    char data[0x28];
};

int S_func_00814800::f(int value)
{
    G1_func_00926442();
    G1_func_00814760();
    *(int *)((char *)this + 0x20) = value;
    *(int *)this = 0x9f3dac;
    return (int)this;
}
