// from server: 60% by atomic.potato
extern "C" void __cdecl func_00537b60(void*, void*, int);

struct S
{
    void __stdcall f(void*, int);
};

void __stdcall S::f(void* a, int b)
{
    if (b != 4)
    {
        func_00537b60(0, a, b);
        return;
    }

    *(unsigned long*)a = 0x00b1d350;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
}
