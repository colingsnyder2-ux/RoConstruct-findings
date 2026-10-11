// from server: 16% by atomic.potato
struct Inner {
    char pad[0x10];
    int f(int, int, int, int, int);
};

struct Outer {
    char pad0[0x4];
    Inner inner;
    int g(int, int, int, int, int);
};

int Inner::f(int a, int b, int c, int d, int e) {
    return 0;
}

int Outer::g(int a, int b, int c, int d, int e) {
    Inner* p = &inner;
    p->f(a, b, c, d, e);
    return a;
}
