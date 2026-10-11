// from server: 34% by atomic.potato
struct CXTPPopupBar_CControlExpandButton {
    char pad[0x100];
    void* m_pToolTip;
    void* GetToolTip();
    void Invoke(void* a, void* b, void* c, void* d, void* e, void* f, void* g);
};

void* CXTPPopupBar_CControlExpandButton::GetToolTip()
{
    return m_pToolTip;
}

void CXTPPopupBar_CControlExpandButton::Invoke(void* a, void* b, void* c, void* d, void* e, void* f, void* g)
{
    void* p = GetToolTip();
    void** vtbl = *(void***)p;
    typedef void (__thiscall *Fn)(void*, void*, void*, void*, void*, void*, void*, void*);
    Fn fn = (Fn)vtbl[0x2c];
    fn(p, a, b, c, d, e, f, g);
}
