// from server: 52% by atomic.potato
struct S
{
    int f(int, int);
    int m10;
    int m14;
};

int S::f(int a, int b)
{
    if (a)
    {
        typedef void (__thiscall *Fn)(void *, int);
        Fn fn = (Fn)m10;
        fn((char *)m14 + a - 28, b);
    }
    else
    {
        typedef void (__thiscall *Fn)(void *, int);
        Fn fn = (Fn)m10;
        fn((char *)m14, b);
    }
    return 0;
}
