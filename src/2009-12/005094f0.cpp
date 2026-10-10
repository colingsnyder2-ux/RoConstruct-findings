// from server: 82% by atomic.potato
extern "C" void __cdecl f5079d0(unsigned int);

struct S
{
    void __cdecl f(void*, unsigned int);
};

void S::f(void* a, unsigned int b)
{
    if (b != 4)
    {
        f5079d0(b);
        return;
    }

    *(unsigned int*)a = 0x00b163d8;
    ((unsigned char*)a)[4] = 0;
    ((unsigned char*)a)[5] = 0;
}
