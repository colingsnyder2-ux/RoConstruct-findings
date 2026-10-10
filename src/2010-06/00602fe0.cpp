// from server: 58% by atomic.potato
extern "C" void roc_target();

void target(int, void *p, int value)
{
    if (value != 4)
    {
        target(0, p, value);
    }
    else
    {
        *(unsigned long *)p = 0x00baecf0;
        ((unsigned char *)p)[4] = 0;
        ((unsigned char *)p)[5] = 0;
    }
}
