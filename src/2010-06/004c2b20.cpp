// from server: 52% by atomic.potato
extern "C" void G1_func_004c06e0();

struct S
{
    void __stdcall f(int, int);
};

void __stdcall S::f(int a, int b)
{
    if (b != 4)
    {
        *(int *)a = 0x00b8d408;
        *((char *)a + 4) = 0;
        *((char *)a + 5) = 0;
    }
    else
    {
        G1_func_004c06e0();
    }
}
