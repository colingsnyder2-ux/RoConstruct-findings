// from server: 57% by atomic.potato
struct Inner {
    void* f(void*);
};

struct Outer {
    char pad[0x1c];
    Inner* inner;
    void method(void*, void*);
};

void Outer::method(void* a, void* b) {
    void* r;
    if (a) {
        r = inner->f(a);
    } else {
        r = 0;
    }
    inner->f(r);
}
