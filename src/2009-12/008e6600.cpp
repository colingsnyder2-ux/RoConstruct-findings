// from server: 29% by atomic.potato
struct CXTCaptionPopupWnd
{
    void f();
};

void CXTCaptionPopupWnd::f()
{
    void (**p)(CXTCaptionPopupWnd*) =
        (void (**)(CXTCaptionPopupWnd*))(*(unsigned long**)this + 0x14c);
    (*p)(this);
}
