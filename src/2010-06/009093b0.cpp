// from server: 55% by atomic.potato
extern "C" void __cdecl f(int, int, int);

struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
    {
        f(a, b, c);
        return;
    }

    *(int *)b = 0x00BFE8D8;
    *((char *)b + 4) = 0;
    *((char *)b + 5) = 0;
}
