// from server: 82% by atomic.potato
extern "C" void G1_func_004c0670(int);

void func_004c2af0(int a, int *p, int b)
{
    if (b != 4)
    {
        G1_func_004c0670(b);
    }
    else
    {
        *p = 0x00b8d368;
        ((char *)p)[4] = 0;
        ((char *)p)[5] = 0;
    }
}
