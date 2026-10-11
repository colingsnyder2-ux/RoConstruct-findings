// from server: 56% by atomic.potato
struct Inner {
    virtual void f(int*);
};

struct S {
    char pad[0x18];
    Inner* p;
    bool g(int*, int);
};

extern "C" int __cdecl sub_5bde60(int*, int*);

bool S::g(int* a, int) {
    int v = *a;
    if (sub_5bde60(a, &v)) {
        Inner* q = p;
        q->f(&v);
        return true;
    }
    return false;
}
