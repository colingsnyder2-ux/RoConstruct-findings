// from server: 70% by atomic.potato
extern "C" void func_005f56c0(int, int, int);

struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
    {
        func_005f56c0(0, a, b);
        return;
    }

    *(int*)a = 0xBABD70;
    ((char*)a)[4] = 0;
    ((char*)a)[5] = 0;
}
