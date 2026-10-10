// from server: 70% by atomic.potato
extern "C" void __cdecl Target(int, int, int);

struct S
{
};

void __cdecl f(int, int a, int b)
{
    if (b != 4)
    {
        Target(0, a, b);
        return;
    }

    *(int*)a = 0x00b39d58;
    *((char*)a + 4) = 0;
    *((char*)a + 5) = 0;
}
