// from server: 49% by colin
// roc 2007-08 0069b650  unit: CXTPPropertyGridView  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069b650

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct CPoint {
    int x;
    int y;
};

struct CSize {
    int cx;
    int cy;
};

struct CXTPPropertyGridView {
    void sub_63023E();
    void sub_7383AC(void*);
    void sub_67FFA0(void*);
    void* sub_69AB30();
    void sub_7383A6();
    void Method();
};

extern "C" void __stdcall OffsetRect(CRect* rect, int dx, int dy);

void CXTPPropertyGridView::Method()
{
    CRect rect;
    CPoint pt;
    CSize size;

    sub_63023E();
    sub_7383AC(this);
    sub_67FFA0(this);

    pt.x = -pt.x;
    pt.y = -pt.y;

    OffsetRect(&rect, pt.x, pt.y);

    void* p = sub_69AB30();
    void** vtbl = *(void***)p;
    typedef void (__thiscall *Fn)(void*, CRect*, CPoint*, int);
    Fn fn = (Fn)vtbl[6];
    fn(p, &rect, &pt, 0);

    sub_7383A6();
}
