// from server: 70% by atomic.potato
extern "C" void __cdecl f_7c1fe0(int, int, int);

struct S
{
    void __cdecl f(int, int);
};

void __cdecl S::f(int a, int b)
{
    if (b != 4)
    {
        f_7c1fe0(0, a, b);
        return;
    }

    *(int*)a = 0xb63948;
    *((char*)a + 4) = 0;
    *((char*)a + 5) = 0;
}
