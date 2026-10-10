// from server: 25% by colin
extern "C" void* __stdcall malloc(unsigned int);

struct Inner {
    void ctor();
};

struct Outer {
    void assign(void* a, void* b);
};

struct S {
    void f(void* arg);
};

void S::f(void* arg)
{
    void* p = malloc(0x10c);
    Inner* inner = 0;
    if (p) {
        inner = (Inner*)p;
        inner->ctor();
    }
    ((Outer*)arg)->assign(inner, 0);
}
