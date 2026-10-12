// from server: 80% by king_originala
struct S;

struct Collection {
    void f(void **);
};

struct Argument {
    int field0;
    S *field4;
    void f(int);
};

struct Receiver {
    void f(void *);
};

struct S {
    virtual int v0();
    virtual int v1();
    int field4;
    Receiver *field8;
    char padding[0x38 - 0x0c];
    Collection field38;
    void f(void *);
};

void S::f(void *a1)
{
    field38.f(&a1);
    Argument *p = (Argument *)a1;
    if (p->field4 != 0) {
        int r = p->field4->v1();
        int r2 = v1();
        if (r > r2)
            field8->f(p);
        p->f((int)this);
    }
}
