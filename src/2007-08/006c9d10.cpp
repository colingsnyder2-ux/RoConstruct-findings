// from server: 93% by tester
struct Inner {
    virtual int f(int, int);
};

struct Outer {
    char pad[0x54];
    Inner* inner;
};

extern "C" void __stdcall g(int, int, int);

void __cdecl m(Outer* o, int a, int b)
{
    int r = o->inner->f(a, b);
    if (r != b) {
        g(0xe, -1, 0);
    }
}
