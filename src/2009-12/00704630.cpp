// from server: 70% by atomic.potato
extern "C" void __cdecl sub_702e60(int, int, int);

struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
    {
        sub_702e60(0, a, b);
        return;
    }

    *(int*)a = 0xb49150;
    *(char*)(a + 4) = 0;
    *(char*)(a + 5) = 0;
}
