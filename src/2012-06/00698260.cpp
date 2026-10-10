// from server: 94% by atomic.potato
extern "C" int __cdecl Function982054(int);
extern "C" int __cdecl Function697860(int);

int Function00698260(void *value)
{
    int *slot = *(int **)((char *)value + 0x20);
    int value2 = *slot;
    if (value2 != 0)
    {
        value2 = Function982054(value2);
        Function697860(value2);
        *slot = 0;
    }
    return 0;
}
