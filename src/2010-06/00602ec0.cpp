// from server: 82% by atomic.potato
extern "C" void __cdecl sub_6018e0(int);

struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
    {
        sub_6018e0(b);
        return;
    }

    *(int*)a = 0xBAE810;
    *((char*)a + 4) = 0;
    *((char*)a + 5) = 0;
}
