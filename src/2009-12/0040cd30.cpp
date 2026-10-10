// from server: 48% by atomic.potato
struct CIDEBrowserView
{
    void __cdecl f(void (*callback)(unsigned char));
};

void CIDEBrowserView::f(void (*callback)(unsigned char))
{
    callback((unsigned char)*(unsigned char *)((char *)this + 0x2ad));
}
