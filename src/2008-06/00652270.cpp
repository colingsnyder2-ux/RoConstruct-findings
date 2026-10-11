// from server: 45% by atomic.potato
struct Inner {
    char pad[0x3c];
    void ctor(int);
};

struct Outer {
    int a;
    int b;
    int c;
    Inner inner;
    char flag;
    char pad2;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl Inner_ctor(Inner*, int);

Outer* __cdecl make(int a, int b, int c, int d, char e)
{
    Outer* p = (Outer*)operator_new(0x4c);
    if (p) {
        p->a = a;
        p->b = b;
        p->c = c;
        Inner_ctor(&p->inner, d);
        p->flag = e;
        p->pad2 = 0;
    }
    return p;
}
