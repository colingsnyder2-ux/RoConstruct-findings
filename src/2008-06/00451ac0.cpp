// from server: 76% by colin
struct Base {
    virtual void vfunc();
    char padding[80];
    Base();
    ~Base();
};

struct Inner {
    void* field0;
    char pad[8];
    void* fieldC;
    void* field10;
    void* field14;
};

struct CRobloxDoc : Base {
    char pad0[0x74 - 4 - 80];
    void* field74;
    Inner inner;
    void* field90;
    void* field94;
    CRobloxDoc();
};

extern "C" void* __cdecl sub_6A0920(int);

CRobloxDoc::CRobloxDoc()
{
    Base::Base();
    *(void**)this = (void*)0x817ce4;
    field74 = 0;
    inner.field0 = 0;
    void* p = sub_6A0920(4);
    if (p != 0) {
        *(void**)p = &inner;
    } else {
        p = 0;
    }
    inner.field0 = p;
    inner.fieldC = 0;
    inner.field10 = 0;
    inner.field14 = 0;
    field90 = 0;
    field94 = 0;
}
