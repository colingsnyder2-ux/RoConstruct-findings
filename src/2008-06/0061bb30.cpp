// from server: 77% by atomic.potato
struct Inner {
    char pad[0x3c];
    int field3c;
};

struct Mid {
    char pad[8];
    Inner* p;
};

struct Arg {
    int a;
    int b;
    int c;
};

struct S {
    char pad[8];
    Mid* m;
    Arg f(int);
};

extern "C" Arg* __fastcall sub_61ba10(Inner* in, Arg* out, int x);

Arg S::f(int x) {
    Arg tmp;
    Inner* in = m->p;
    Arg* r = sub_61ba10((Inner*)((char*)in + 0x3c), &tmp, x);
    Arg result;
    result.a = (int)this;
    result.b = r->a;
    result.c = r->b;
    return result;
}
