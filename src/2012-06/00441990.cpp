// from server: 82% by atomic.potato
extern "C" void __cdecl g(int);

struct S
{
    void __cdecl f(void* a, int b);
};

void S::f(void* a, int b)
{
    if (b != 4)
    {
        g(b);
    }
    else
    {
        *(unsigned long*)a = 0x00D66E20UL;
        *((unsigned char*)a + 4) = 0;
        *((unsigned char*)a + 5) = 0;
    }
}
