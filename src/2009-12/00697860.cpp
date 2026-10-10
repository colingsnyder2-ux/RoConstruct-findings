// from server: 70% by atomic.potato
extern "C" void __cdecl sub_696510(int, int, int);

struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
    {
        sub_696510(0, a, b);
    }
    else
    {
        *(int*)a = 0x00b38d70;
        ((char*)a)[4] = 0;
        ((char*)a)[5] = 0;
    }
}
