// from server: 60% by atomic.potato
struct S
{
};

void __cdecl f(int, int value)
{
    int* p;
    if (value == 4)
    {
        p[0] = 0xb600e0;
        ((char*)p)[4] = 0;
        ((char*)p)[5] = 0;
    }
    else
    {
        value = value;
    }
}
