// from server: 51% by colin
struct XTP_REPORTRECORDITEM_DRAWARGS;

struct Inner {
    virtual void f18c();
    virtual void f160();
};

struct Outer {
    virtual Inner* f0();
    virtual void f4(Inner*);
};

struct XTP_REPORTRECORDITEM_DRAWARGS {
    void func(Outer* p);
};

void XTP_REPORTRECORDITEM_DRAWARGS::func(Outer* p) {
    Inner* inner = p->f0();
    inner->f160();
    p->f4(inner);
}
