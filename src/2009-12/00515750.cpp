// from server: 80% by atomic.potato
extern "C" void __cdecl fallback(int);

struct S
{
};

void __cdecl f(int a, int value)
{
    if (a != 4)
    {
        fallback(a);
        return;
    }

    *(int *)value = 0xb18730;
    *((char *)value + 4) = 0;
    *((char *)value + 5) = 0;
}
