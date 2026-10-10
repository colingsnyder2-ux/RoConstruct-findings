// from server: 55% by atomic.potato
extern "C" void __cdecl f(void*);

struct S
{
    void __cdecl f(void*, unsigned int);
};

void S::f(void* a, unsigned int b)
{
    if (b != 4)
    {
        f(this, b);
        return;
    }

    *(unsigned long*)a = 0x00b3d2e0;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
}
