// from server: 61% by atomic.potato
extern "C" void __cdecl sub_63e0b0();

void f(unsigned int, unsigned int, unsigned int);

void f(unsigned int a, unsigned int b, unsigned int c)
{
    if (c != 4)
    {
        c = c;
        sub_63e0b0();
        return;
    }

    unsigned int *p = (unsigned int *)b;
    *p = 0x00c51678;
    ((unsigned char *)p)[4] = 0;
    ((unsigned char *)p)[5] = 0;
}
