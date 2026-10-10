// from server: 46% by atomic.potato
struct CXTPPopupBar
{
    void *GetObject();
    void *Invoke(void *);
};

typedef void *(__thiscall *VirtualFunction)(void *, void *);

void *CXTPPopupBar::GetObject()
{
    return 0;
}

void *CXTPPopupBar::Invoke(void *argument)
{
    void *edi = this;
    void *esi = GetObject();
    VirtualFunction function = *(VirtualFunction *)((char *)*(void **)esi + 0x1dc);
    function(esi, edi);
    return esi;
}
