// from server: 82% by atomic.potato
extern "C" void __cdecl sub_4edb60(int);

struct S
{
    void __cdecl f(void*, int);
};

void __cdecl S::f(void* p, int n)
{
    if (n != 4)
    {
        sub_4edb60(n);
        return;
    }
    *(unsigned long*)p = 0x00b92ee8;
    *((unsigned char*)p + 4) = 0;
    *((unsigned char*)p + 5) = 0;
}
