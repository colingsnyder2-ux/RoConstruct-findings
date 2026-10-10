// from server: 82% by atomic.potato
extern "C" void __cdecl tool_target(int);

struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
    {
        tool_target(b);
        return;
    }

    *(int *)a = 0xb37ee0;
    *((char *)a + 4) = 0;
    *((char *)a + 5) = 0;
}
