// from server: 82% by atomic.potato
extern "C" void __cdecl sub_512cb0(int);

struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
    {
        sub_512cb0(b);
        return;
    }

    *(int*)a = 0x00b182f8;
    *((char*)a + 4) = 0;
    *((char*)a + 5) = 0;
}
