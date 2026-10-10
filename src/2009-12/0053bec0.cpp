// from server: 82% by atomic.potato
extern void __cdecl func_005380a0(unsigned int);

void func_0053bec0(void* a, void* b, unsigned int c)
{
    if (c != 4)
    {
        func_005380a0(c);
        return;
    }

    *(unsigned int*)b = 0x00b1dbb8;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
