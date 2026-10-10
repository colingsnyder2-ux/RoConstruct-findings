// from server: 31% by atomic.potato
struct S
{
    void __cdecl f(int, int);
};

void S::f(int, int value)
{
    if (value != 4)
        return;

    int *p = 0;
    *p = 0xbe0308;
    p[1] = 0;
    p[2] = 0;
}
