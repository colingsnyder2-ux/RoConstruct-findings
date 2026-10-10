// from server: 82% by atomic.potato
extern "C" void __cdecl sub_5ed170(unsigned int);

struct S
{
    void __cdecl f(void*, unsigned int);
};

void S::f(void* a, unsigned int b)
{
    if (b != 4)
    {
        sub_5ed170(b);
        return;
    }

    *(unsigned long*)a = 0x00c46730;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
}
