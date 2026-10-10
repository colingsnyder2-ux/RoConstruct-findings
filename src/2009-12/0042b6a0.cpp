// from server: 91% by atomic.potato
struct S
{
};

extern "C" void __cdecl target(void *, int);

void __cdecl f(void *p, int value)
{
    if (value != 4)
    {
        target(p, value);
        return;
    }

    *(unsigned long *)p = 0x00b04cc8;
    *((unsigned char *)p + 4) = 0;
    *((unsigned char *)p + 5) = 0;
}
