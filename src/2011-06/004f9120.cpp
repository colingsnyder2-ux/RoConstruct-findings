// from server: 70% by atomic.potato
extern "C" void __cdecl sub_4f49c0(int, int);

struct S
{
    void __cdecl f(int, int);
};

void __cdecl S::f(int a, int b)
{
    if (b != 4)
    {
        sub_4f49c0(a, b);
        return;
    }

    *(int*)a = 0x00c2aaa0;
    *((char*)a + 4) = 0;
    *((char*)a + 5) = 0;
}
