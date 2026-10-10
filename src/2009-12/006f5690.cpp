// from server: 55% by atomic.potato
struct S
{
};

void __cdecl f(void* a, void* p, int n)
{
    if (n == 4)
    {
        *(unsigned long*)p = 0x00b45fc0;
        *((unsigned char*)p + 4) = 0;
        *((unsigned char*)p + 5) = 0;
    }
    else
    {
        f(a, p, n);
    }
}
