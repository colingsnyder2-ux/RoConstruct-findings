// from server: 43% by atomic.potato
extern "C" void __cdecl f(void *, unsigned int);

void f(void *p, unsigned int n)
{
    if (n != 4)
    {
        f(p, n);
        return;
    }

    *(unsigned long *)p = 0x00c22790;
    *((unsigned char *)p + 4) = 0;
    *((unsigned char *)p + 5) = 0;
}
