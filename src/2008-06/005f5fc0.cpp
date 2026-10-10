// from server: 52% by atomic.potato
typedef unsigned int uint32_t;

extern "C" void __cdecl sub_5f5dd0(void *, void *, void *, void *, void *, void *);

struct S {
    void __cdecl f(void *, void *, void *, void *);
};

void __cdecl S::f(void *a, void *b, void *c, void *d) {
    sub_5f5dd0(d, c, b, a, this, 0);
}
