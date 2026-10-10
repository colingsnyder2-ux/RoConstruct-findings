// from server: 64% by atomic.potato
struct CIDEBrowserView
{
    int f();
};

int CIDEBrowserView::f()
{
    void *p = *(void **)((char *)this + 0xf0);
    void *q = *(void **)p;
    return ((int (__thiscall *)(void *))*(void **)((char *)q + 0x1c))(p);
}
