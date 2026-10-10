// from server: 60% by atomic.potato
struct S
{
};

void __cdecl f(void* a, unsigned long b, unsigned long c)
{
    if (c == 4)
    {
        *(unsigned long*)b = 0x00d6dce8;
        *((unsigned char*)b + 4) = 0;
        *((unsigned char*)b + 5) = 0;
    }
}
