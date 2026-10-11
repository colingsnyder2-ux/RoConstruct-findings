// from server: 74% by atomic.potato
struct Inner
{
    unsigned char padding[0xec];
    unsigned int value;
    void f(unsigned int a, unsigned int b);
};

void Inner::f(unsigned int a, unsigned int b)
{
    value = (value | a) & ~b;
}

struct Outer
{
    int method(int a, int b);
};

int Outer::method(int a, int b)
{
    char buf[0x58];
    int *p = (int *)buf;
    Inner *inner = (Inner *)a;
    int *vtbl = *(int **)inner;
    void (__thiscall *fn1)(void *, void *, int, int, int) = (void (__thiscall *)(void *, void *, int, int, int))vtbl[0x204 / 4];
    fn1(inner, buf, 0x7d00, 0x4a, 0);
    int v0 = p[0];
    int v1 = p[1];
    void (__thiscall *fn2)(void *, int, int, int, int, int) = (void (__thiscall *)(void *, int, int, int, int, int))0x7f3c32;
    fn2(inner, 0, 0, v1, v0, 1);
    int *field180 = (int *)((char *)inner + 0x180);
    if (*field180 != 0)
    {
        void (__thiscall *fn3)(void *, void *, int) = (void (__thiscall *)(void *, void *, int))0x8925d0;
        fn3(inner, inner, -1);
        Inner *tmp = inner;
        void (__thiscall *fn4)(void *, int, int) = (void (__thiscall *)(void *, int, int))0x804750;
        fn4(tmp, 0, 0x1f);
        *(unsigned int *)((char *)inner + 0xf0) &= 0xffbfffff;
    }
    int (__thiscall *fn5)(void *, void *, int, int, int) = (int (__thiscall *)(void *, void *, int, int, int))0x926cac;
    int r = fn5(this, inner, 0, 0, b);
    if (r == 0)
        return 0;
    int *vtbl2 = *(int **)this;
    int (__thiscall *fn6)(void *, int, int, int) = (int (__thiscall *)(void *, int, int, int))vtbl2[0x120 / 4];
    int esi_val = *(int *)((char *)inner + 0xd8);
    int eax_val = fn6(this, 0x40c, 0, 0);
    int *vtbl3 = *(int **)this;
    int (__thiscall *fn7)(void *, int, int, int *) = (int (__thiscall *)(void *, int, int, int *))vtbl3[0x120 / 4];
    p[0] = 0x50;
    p[1] = 0x100;
    *(int *)(buf + 0x40) = esi_val;
    fn7(this, 0x406, eax_val - 1, p);
    return 1;
}
