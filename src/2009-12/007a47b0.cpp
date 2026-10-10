// from server: 52% by atomic.potato
struct S
{
    void __cdecl f(void*, int, int);
};

void S::f(void* p, int a, int b)
{
    if (b != 4)
    {
        f(p, a, b);
        return;
    }

    *(unsigned int*)p = 0x00b62ea8;
    ((unsigned char*)p)[4] = 0;
    ((unsigned char*)p)[5] = 0;
}
