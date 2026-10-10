// from server: 88% by atomic.potato
struct S
{
    int f(int);
    void *field25c;
};

typedef int (__thiscall *Fn)(void *, int);

int S::f(int arg)
{
    void *p = field25c;
    Fn fn = *(Fn *)((char *)*(void **)p + 0x15c);
    fn(p, arg);
    return arg;
}
