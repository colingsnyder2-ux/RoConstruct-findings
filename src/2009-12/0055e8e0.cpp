// from server: 65% by atomic.potato
extern "C" void __cdecl target();

struct S
{
    void f(int, int, int);
};

void S::f(int a, int b, int c)
{
    if (c != 4)
    {
        target();
        return;
    }

    *(int*)b = 0xb20348;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
