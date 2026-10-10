// from server: 70% by atomic.potato
extern "C" void __cdecl func_006cb3d0(int, void*, int);

struct ArcHandles
{
    void __cdecl f(void*, int);
};

void __cdecl ArcHandles::f(void* a, int b)
{
    if (b != 4)
    {
        func_006cb3d0(0, a, b);
        return;
    }

    *(unsigned long*)a = 0x00bd2da0;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
}
