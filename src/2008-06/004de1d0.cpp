// from server: 57% by colin
struct S {
    void __cdecl f(unsigned short a, unsigned short b, unsigned short c);
    void g(unsigned short *p);
};

void S::f(unsigned short a, unsigned short b, unsigned short c) {
    unsigned short v;
    v = a;
    g(&v);
    v = b;
    g(&v);
    v = c;
    g(&v);
    v = a;
    g(&v);
    v = c;
    g(&v);
    v = b;
    g(&v);
}
