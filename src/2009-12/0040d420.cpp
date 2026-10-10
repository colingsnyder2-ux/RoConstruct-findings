// from server: 64% by atomic.potato
struct CIDEBrowserView
{
    int f();
};

int CIDEBrowserView::f()
{
    struct V
    {
        int (**vtable)();
    };

    V* p = *(V**)((char*)this + 0xf0);
    int* q = (int*)((char*)p + 0x38);
    return ((int (__cdecl *)(V*))(*q))(p);
}
