// from server: 61% by atomic.potato
extern "C" void G1_func_0074b570();

void func_0074ba30(int a, void *p, int value)
{
    if (value != 4)
    {
        G1_func_0074b570();
        return;
    }

    *(int *)p = 0x00b580a8;
    *((unsigned char *)p + 4) = 0;
    *((unsigned char *)p + 5) = 0;
}
