// from server: 68% by atomic.potato
struct S_func_0084dc80
{
    char pad0[40];
    int m_x;
    int f();
};

int S_func_0084dc80::f()
{
    return m_x;
}

extern "C" int __cdecl f_0084dc80();

void f_0085c380(int*& p)
{
    int eax = f_0084dc80();
    eax &= 0xfbffffff;
    if (p == 0)
        eax |= 0x04000000;
    p = (int*)eax;
}
