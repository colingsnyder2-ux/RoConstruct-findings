// from server: 55% by atomic.potato
struct EventDesc
{
    void __cdecl f(void*, unsigned int);
};

void EventDesc::f(void* a, unsigned int b)
{
    if (b == 4)
    {
        *(unsigned long*)a = 0x00b57b58;
        ((unsigned char*)a)[4] = 0;
        ((unsigned char*)a)[5] = 0;
    }
    else
    {
        f(a, b);
    }
}
