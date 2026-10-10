// from server: 51% by atomic.potato
struct S
{
    int f(int);
    void **v60;
};

int S::f(int value)
{
    void **p = v60;
    void **table = (void **)*p;
    typedef void (__thiscall *Fn)(void *, int, int);
    Fn fn = (Fn)table[3];
    fn(p, value, 0);
    return value;
}
