// from server: 55% by atomic.potato
struct S
{
};

void __cdecl f(void* a, int b, int c)
{
    if (c == 4)
    {
        *(int*)b = 0x00c62ef8;
        *((char*)b + 4) = 0;
        *((char*)b + 5) = 0;
    }
    else
    {
        f(a, b, c);
    }
}
