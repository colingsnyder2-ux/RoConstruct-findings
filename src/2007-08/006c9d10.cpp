// from server: 74% by colin
struct Inner {
    virtual int f(int, int);
};

struct Outer {
    char pad[0x54];
    Inner* inner;
};

struct S {
};

int __cdecl m(Outer* o, int a, int b)
{
    int r = o->inner->f(a, b);
    if (r != b) {
        extern void __stdcall g(int, int, int);
        g(0xe, -1, 0);
    }
    return r;
}
