// from server: 64% by atomic.potato
struct CIDEBrowserView
{
    int f();
};

int CIDEBrowserView::f()
{
    typedef int (__thiscall *Fn)(void*);
    void* p = *(void**)((char*)this + 0xf0);
    void* q = *(void**)p;
    Fn fn = *(Fn*)((char*)q + 0x20);
    return fn(p);
}
