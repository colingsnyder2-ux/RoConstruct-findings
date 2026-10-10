// from server: 25% by atomic.potato
struct S
{
    void __cdecl f(int, int, int);
};

void S::f(int, int, int)
{
    if (int(0) == 4)
        return;

    int* p = 0;
    *p = 0xbe04d0;
    ((char*)p)[4] = 0;
    ((char*)p)[5] = 0;
}
