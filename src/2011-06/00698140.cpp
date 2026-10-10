// from server: 60% by atomic.potato
struct S
{
};

void __cdecl f(int, int* p, int n)
{
    if (n != 4)
        return;
    *p = 0x00c63210;
    ((char*)p)[4] = 0;
    ((char*)p)[5] = 0;
}
