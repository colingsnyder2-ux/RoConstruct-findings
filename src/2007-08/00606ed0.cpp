// from server: 90% by colin
struct ClumpStage {
    void f606ed0(int);
    void f606c30(int);
};

struct Inner {
    virtual int v0();
    virtual int v1();
    virtual int v2();
    virtual int v3();
    virtual int v4();
    virtual int v5();
};

extern "C" void __stdcall f5e29b0(void*, void*, void*);
extern "C" void __stdcall f609130(void*, void*);

void ClumpStage::f606ed0(int a)
{
    Inner* p = (Inner*)a;
    f609130(this, p);
    if (p->v3() == 0) {
        int t = p->v5();
        if (t == 5 || t == 6) {
            void* tmp1;
            void* tmp2;
            tmp2 = p;
            f5e29b0((char*)this + 0x44, &tmp1, &tmp2);
            return;
        }
    }
    if (p->v3() == 0) {
        if (p->v5() == 7) {
            f606c30(a);
            return;
        }
    }
    void* tmp1;
    void* tmp2;
    tmp2 = p;
    f5e29b0((char*)this + 0xa8, &tmp1, &tmp2);
}
