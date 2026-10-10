// from server: 82% by atomic.potato
extern "C" void __cdecl f_4c0270(unsigned int);

struct S
{
    void __cdecl f(void *, unsigned int);
};

void S::f(void *p, unsigned int value)
{
    if (value != 4)
    {
        f_4c0270(value);
        return;
    }

    *(unsigned int *)p = 0xb8cf60;
    *((unsigned char *)p + 4) = 0;
    *((unsigned char *)p + 5) = 0;
}
