// from server: 37% by atomic.potato
struct Inner {
    virtual double f(int);
};

struct S {
    char pad[0x18];
    Inner* p;
    double g(int);
};

double S::g(int a)
{
    double d = p->f(a);
    void* r = &d;
    void (*fn)(void*, void*) = (void (*)(void*, void*))0x5bdf70;
    fn(&d, r);
    return d;
}
