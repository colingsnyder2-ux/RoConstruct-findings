// from server: 57% by atomic.potato
struct S
{
};

void __cdecl f(int value, int* p)
{
    if (value != 4)
        return;

    *p = 0xb3a0e8;
    ((char*)p)[4] = 0;
    ((char*)p)[5] = 0;
}
