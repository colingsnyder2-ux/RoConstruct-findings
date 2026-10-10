// from server: 55% by atomic.potato
struct S
{
};

void __cdecl f(int a, int* p, int c)
{
    if (c == 4)
    {
        *p = 0x00d723f8;
        ((unsigned char*)p)[4] = 0;
        ((unsigned char*)p)[5] = 0;
    }
    else
    {
        f(a, p, c);
    }
}
