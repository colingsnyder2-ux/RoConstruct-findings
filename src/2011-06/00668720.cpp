// from server: 60% by atomic.potato
struct S
{
};

extern "C" void __cdecl target(void*, int, int);

int __cdecl f(void* a, int b, int c)
{
    if (c != 4)
    {
        target(a, b, c);
        return 0;
    }

    *(unsigned int*)b = 0x00c58278;
    ((unsigned char*)b)[4] = 0;
    ((unsigned char*)b)[5] = 0;
    return 0;
}
