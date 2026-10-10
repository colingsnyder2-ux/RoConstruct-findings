// from server: 61% by atomic.potato
extern void G1_func_0074b500();

void func_0074ba00(int, void** p, int value)
{
    if (value != 4)
    {
        G1_func_0074b500();
        return;
    }

    *p = (void*)0x00b57fa0;
    ((unsigned char*)p)[4] = 0;
    ((unsigned char*)p)[5] = 0;
}
