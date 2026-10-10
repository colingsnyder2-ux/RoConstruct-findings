// from server: 77% by atomic.potato
extern "C" void __cdecl f(unsigned int);

void g(void *a, unsigned int b)
{
    if (b != 4)
    {
        f(b);
        return;
    }

    *(unsigned int *)a = 0xbae988;
    ((unsigned char *)a)[4] = 0;
    ((unsigned char *)a)[5] = 0;
}
