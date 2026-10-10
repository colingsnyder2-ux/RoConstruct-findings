// from server: 85% by atomic.potato
struct CIDEBrowserView
{
    char padding[0xf0];
    void* field_f0;
    void f();
};

void CIDEBrowserView::f()
{
    void* object = *(void**)field_f0;
    void (__thiscall *method)(void*) =
        *(void (__thiscall **)(void*))((char*)object + 0x38);
    method(object);
}
