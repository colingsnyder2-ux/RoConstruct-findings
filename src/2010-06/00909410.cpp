// from server: 77% by atomic.potato
extern "C" void __cdecl target(unsigned int);

void f(void *a, unsigned int b)
{
    if (b != 4)
    {
        target(b);
        return;
    }

    *(unsigned long *)a = 0x00bfea10;
    ((unsigned char *)a)[4] = 0;
    ((unsigned char *)a)[5] = 0;
}
