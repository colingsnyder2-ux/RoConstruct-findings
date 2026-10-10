// from server: 70% by atomic.potato
extern "C" void __cdecl sub_428fc0(int, int, int);

struct S
{
    void __cdecl f(int, int);
};

void __cdecl S::f(int a, int b)
{
    if (b != 4)
    {
        sub_428fc0(0, a, b);
        return;
    }

    *(int*)a = 0x00b7dcc8;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
}
