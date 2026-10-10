// from server: 84% by atomic.potato
struct S
{
};

void __cdecl f(void* a, void* b, int c)
{
    if (c != 4)
    {
        int (*p)(void*, void*, int) = 0;
        p(a, b, c);
        return;
    }

    *(int*)b = 0xbd1730;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
