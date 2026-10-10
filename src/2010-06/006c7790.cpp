// from server: 60% by atomic.potato
extern "C" void __cdecl sub_6c7430(void*, void*, int, int);

struct S
{
    void __cdecl f(void*, void*, int);
};

void __cdecl S::f(void* a, void* b, int c)
{
    if (c != 4)
    {
        sub_6c7430(a, b, c, c);
        return;
    }

    unsigned char* p = (unsigned char*)b;
    *(unsigned long*)p = 0x00bd18e8;
    p[4] = 0;
    p[5] = 0;
}
