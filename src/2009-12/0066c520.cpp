// from server: 64% by atomic.potato
extern "C" void __cdecl sub_66c010(void*);

struct S
{
    void f(void*, unsigned int);
};

void S::f(void* a, unsigned int b)
{
    if (b != 4)
    {
        sub_66c010(a);
        return;
    }

    *(unsigned long*)a = 0x00b33ff0;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
}
