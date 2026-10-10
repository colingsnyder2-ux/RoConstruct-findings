// from server: 63% by atomic.potato
extern "C" void __cdecl Function_0072f5b0(int, int, int);

struct S
{
    void __cdecl f(int, int, int);
};

void __cdecl S::f(int a, int b, int c)
{
    if (c != 4)
    {
        Function_0072f5b0(a, b, c);
        return;
    }

    *(int*)b = 0x00b500d0;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
