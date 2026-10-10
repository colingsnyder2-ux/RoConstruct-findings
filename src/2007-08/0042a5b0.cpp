// from server: 71% by colin
struct Inner {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f(void*, int);
};

struct S {
    int m0;
    char pad[4];
    Inner* m8;
    void method(int);
};

void S::method(int a)
{
    if (m0 != 0) {
        Inner* p = m8;
        p->f((void*)(m0 + 4), a);
    } else {
        Inner* p = m8;
        p->f(0, a);
    }
}
