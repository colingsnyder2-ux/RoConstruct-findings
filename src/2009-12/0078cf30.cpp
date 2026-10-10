// from server: 70% by atomic.potato
extern "C" void __cdecl f_78c720(int, int, int);

struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
    {
        f_78c720(0, a, b);
        return;
    }

    char* p = (char*)a;
    *(int*)p = 0x00b627b0;
    p[4] = 0;
    p[5] = 0;
}
