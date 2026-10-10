// from server: 48% by atomic.potato
struct S
{
};

extern "C" void __cdecl target(int, int, int);

void __cdecl f(int v, int *p)
{
    if (v == 4)
    {
        *p = 0xb4d120;
        ((char *)p)[4] = 0;
        ((char *)p)[5] = 0;
    }
    else
        target(0, 0, v);
}
