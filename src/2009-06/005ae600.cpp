// from server: 22% by atomic.potato
struct Inner {
    int a;
    int b;
    void release();
};

struct S {
    Inner m;
    void f(Inner* out);
};

void S::f(Inner* out) {
    Inner tmp = m;
    m.release();
    *out = tmp;
}
