// from server: 64% by atomic.potato
struct CIDEBrowserView
{
    char padding[0xf0];
    void *field_f0;

    void f();
};

void CIDEBrowserView::f()
{
    void **p = *(void ***)field_f0;
    void (__thiscall *fn)(void *) = (void (__thiscall *)(void *))p[12];
    fn((void *)field_f0);
}
