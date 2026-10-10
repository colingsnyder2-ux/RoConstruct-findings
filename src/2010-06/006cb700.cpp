// from server: 91% by atomic.potato
struct S
{
};

extern "C" void __cdecl func_006cb240(void *, int);

void __cdecl f(void *p, int value)
{
    if (value != 4)
        func_006cb240(p, value);
    else
    {
        *(unsigned long *)p = 0x00bd29e8;
        *((unsigned char *)p + 4) = 0;
        *((unsigned char *)p + 5) = 0;
    }
}
