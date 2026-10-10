// from server: 52% by atomic.potato
extern "C" void __cdecl Function_74f6c0();

struct S
{
    void __cdecl f(void *, int);
};

void S::f(void *p, int value)
{
    if (value == 4)
    {
        *(int *)p = 0x00b592a8;
        *((unsigned char *)p + 4) = 0;
        *((unsigned char *)p + 5) = 0;
    }
    else
    {
        Function_74f6c0();
    }
}
