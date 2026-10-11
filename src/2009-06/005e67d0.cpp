// from server: 42% by atomic.potato
struct Inner {
    virtual void f();
};

struct Outer {
    char pad[0x18];
    Inner* p;
    float g(int, int);
};

extern "C" void __stdcall helper(float*, int);

float Outer::g(int a, int b) {
    float tmp = 0.0f;
    Inner* q = p;
    void (__stdcall *fn)(int, int);
    fn = *(void (__stdcall **)(int, int))((*(void***)q)[2]);
    fn(a, b);
    helper(&tmp, b);
    return tmp;
}
