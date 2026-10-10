// from server: 64% by atomic.potato
struct S
{
    void __stdcall f(void* a, unsigned int b);
};

extern "C" void __cdecl helper(void*, unsigned int);

void __stdcall S::f(void* a, unsigned int b)
{
    if (b != 4)
        helper(a, b);
    else
    {
        *(unsigned int*)a = 0x00b24f10;
        *((unsigned char*)a + 4) = 0;
        *((unsigned char*)a + 5) = 0;
    }
}
