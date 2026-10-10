// from server: 70% by atomic.potato
extern "C" void __cdecl target(int, int);

struct S
{
    void __cdecl f(int, int);
};

void __cdecl S::f(int a, int b)
{
    if (b != 4)
    {
        target(a, b);
        return;
    }

    *(int*)a = 0xb62970;
    *((char*)a + 4) = 0;
    *((char*)a + 5) = 0;
}
