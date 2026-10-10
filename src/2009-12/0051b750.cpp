// from server: 61% by atomic.potato
extern "C" void __cdecl sub_5186F0(void);

struct S
{
    void __cdecl f(void*, int);
};

void __cdecl S::f(void* a, int b)
{
    if (b != 4)
    {
        sub_5186F0();
        return;
    }

    *(unsigned long*)a = 0x00B18DE8;
    ((unsigned char*)a)[4] = 0;
    ((unsigned char*)a)[5] = 0;
}
