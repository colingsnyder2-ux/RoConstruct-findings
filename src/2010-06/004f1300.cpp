// from server: 82% by atomic.potato
extern "C" void __cdecl sub_4edc50(unsigned int);

struct S
{
    void __cdecl f(void* a, unsigned int b);
};

void S::f(void* a, unsigned int b)
{
    if (b != 4)
    {
        sub_4edc50(b);
        return;
    }

    *(unsigned int*)a = 0x00b92ff8;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
}
