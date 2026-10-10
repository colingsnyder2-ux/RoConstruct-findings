// from server: 78% by atomic.potato
struct CIDEBrowserView
{
    int f();
    void* pad[60];
};

int CIDEBrowserView::f()
{
    void** p = (void**)pad[60];
    void* object = *p;
    int (__thiscall *method)(void*) = *(int (__thiscall **)(void*))((char*)object + 0x20);
    return method(object);
}
