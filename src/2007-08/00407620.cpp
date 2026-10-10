// from server: 28% by colin
extern "C" void* __stdcall malloc(unsigned int);

struct Inner {
    void init();
};

struct Outer {
    void assign(void*, void*);
};

struct S {
    void f(void* a, void* b);
};

void S::f(void* a, void* b)
{
    void* p = malloc(0x1b0);
    if (p) {
        ((Inner*)p)->init();
    } else {
        p = 0;
    }
    ((Outer*)this)->assign(p, a);
}
