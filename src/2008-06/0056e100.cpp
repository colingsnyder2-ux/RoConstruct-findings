// from server: 65% by atomic.potato
struct Inner {
    virtual void f();
    virtual void g();
    virtual void h();
};

struct Outer {
    char pad[0x18];
    Inner* inner;
    void* method(void* a, int b);
};

extern "C" void __stdcall sub_5bde30(void*, void*);

void* Outer::method(void* a, int b) {
    char result = 0;
    Inner* p = inner;
    void** vt = *(void***)p;
    void (*fn)(Inner*, int) = (void (*)(Inner*, int))vt[2];
    fn(p, b);
    result = (char)0;
    sub_5bde30(a, &result);
    return a;
}
