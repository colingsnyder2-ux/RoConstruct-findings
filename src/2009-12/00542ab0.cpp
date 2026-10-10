// from server: 63% by atomic.potato
extern "C" void __cdecl sub_53f8c0(int, int, int);

struct S
{
    void __cdecl f(int, int, int);
};

void __cdecl S::f(int a, int b, int c)
{
    if (c != 4)
    {
        sub_53f8c0(a, b, c);
        return;
    }

    *(int*)b = 0xb1e358;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
