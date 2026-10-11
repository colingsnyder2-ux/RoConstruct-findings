// from server: 26% by atomic.potato
struct Inner {
    void method();
};

struct Outer {
    char pad[0x14];
    Inner inner;
    void func();
};

void Outer::func() {
    inner.method();
}
