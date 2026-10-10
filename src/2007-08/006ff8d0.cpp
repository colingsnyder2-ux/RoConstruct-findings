// from server: 97% by colin
struct CAutoHidePanelTabManager
{
    void* SetPanel(void* panel);
};

void* CAutoHidePanelTabManager::SetPanel(void* panel)
{
    if (panel != 0)
    {
        void* old = *(void**)((char*)this + 0xe4);
        if (old != 0)
        {
            (*(void (__thiscall **)(void*, int))(*(int*)old))(old, 1);
        }
        *(void**)((char*)this + 0xe4) = panel;
        (*(void (__thiscall **)(void*))(*(int*)panel + 4))(panel);
        *(void**)((char*)panel + 0x204) = this;
    }
    (*(void (__thiscall **)(CAutoHidePanelTabManager*))(*(int*)this + 0x70))(this);
    return panel;
}
