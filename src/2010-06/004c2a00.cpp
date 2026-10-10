// from server: 60% by atomic.potato
struct S
{
    void __cdecl f(int *, int);
};

void S::f(int *p, int value)
{
    if (value != 4)
        return;

    *p = 0xb8d160;
    ((unsigned char *)p)[4] = 0;
    ((unsigned char *)p)[5] = 0;
}
