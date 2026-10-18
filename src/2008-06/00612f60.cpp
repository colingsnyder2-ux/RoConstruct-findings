// from server: 88% by atomic.potato
struct S {
    int f();
};

extern "C" void __cdecl sub_65c390(void *a);
extern "C" void * __cdecl sub_623ce0(void *a);
extern "C" void __cdecl sub_612f00(void *a, void *b);

int S::f() {
    void *p = (void *)this;
    void *q = *(void **)((char *)p + 0x10);
    unsigned int a = *(unsigned int *)((char *)q + 0x44);
    unsigned int b = *(unsigned int *)((char *)q + 0x40);
    if (a >= b) {
        sub_65c390(p);
    }
    void *r = sub_623ce0(p);
    void *s = *(void **)((char *)p + 8);
    *(void **)s = r;
    *(int *)((char *)s + 8) = 8;
    *(int *)((char *)p + 8) += 0x10;
    void *t = (void *)((char *)p - 0xc);
    sub_612f00(t, r);
    return (int)r;
}
