// from server: 82% by atomic.potato
extern "C" void __cdecl sub_41d840(int);

struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
    {
        sub_41d840(b);
        return;
    }

    *(long*)a = 0x00b03f68;
    *((char*)a + 4) = 0;
    *((char*)a + 5) = 0;
}
