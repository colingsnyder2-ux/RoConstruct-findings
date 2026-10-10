// from server: 55% by atomic.potato
extern "C" void __cdecl sub_4fb960(int, int, int, int);

struct S
{
    void __cdecl f(int, int, int);
};

void S::f(int a, int b, int c)
{
    if (c != 4)
    {
        sub_4fb960(0, 0, b, c);
        return;
    }

    *(int*)b = 0x00b133c8;
    *(char*)(b + 4) = 0;
    *(char*)(b + 5) = 0;
}
