// from server: 80% by atomic.potato
extern "C" int __stdcall IsRectEmpty(void *);
extern "C" void __stdcall SetRectEmpty(void *);

struct CXTPCommandBar
{
    int f();
};

int CXTPCommandBar::f()
{
    void *rect = (char *)this + 0x13c;
    if (!IsRectEmpty(rect))
        SetRectEmpty(rect);

    int (**vtable)(CXTPCommandBar *, int, int) =
        (int (**)(CXTPCommandBar *, int, int))*(void **)this;
    return vtable[0x1ac / 4](this, 0, 1);
}
