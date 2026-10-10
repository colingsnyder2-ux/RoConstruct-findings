// from server: 54% by tester
struct CXTPPropertyGridView {
    void sub_63023E();
    void* sub_69AB30();
    void func();
};

struct Helper1 {
    int a;
    int b;
    void ctor(void*);
    void dtor();
};

struct Helper2 {
    int x;
    int y;
    void ctor(void*);
};

extern "C" void __stdcall OffsetRect(void*, int, int);

void CXTPPropertyGridView::func() {
    sub_63023E();

    Helper1 h1;
    h1.ctor(this);

    Helper2 h2;
    h2.ctor(this);

    int v1 = -h2.x;
    int v2 = -h2.y;
    OffsetRect(&h1, v2, v1);

    void* p = sub_69AB30();
    void** vtbl = *(void***)p;
    typedef void (__thiscall *Fn)(void*, void*, void*, int);
    ((Fn)vtbl[6])(p, &h1, &h2, 0);

    h1.dtor();
}
