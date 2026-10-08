// from server: 84% by colin
// roc 2007-08 006fe010  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fe010
//
// 006fe010  56                   push esi
// 006fe011  57                   push edi
// 006fe012  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006fe016  8bf1                 mov esi, ecx
// 006fe018  397e04               cmp dword ptr [esi + 4], edi
// 006fe01b  7412                 je 0x6fe02f
// 006fe01d  8b06                 mov eax, dword ptr [esi]
// 006fe01f  8b5008               mov edx, dword ptr [eax + 8]
// 006fe022  897e04               mov dword ptr [esi + 4], edi
// 006fe025  ffd2                 call edx
// 006fe027  57                   push edi
// 006fe028  8bce                 mov ecx, esi
// 006fe02a  e861f4ffff           call 0x6fd490
// 006fe02f  5f                   pop edi
// 006fe030  5e                   pop esi
// 006fe031  c20400               ret 4

struct CAutoHidePanelTabManager {
    void* vtbl;
    int field_4;
    void SetActivePane(int pane);
};

extern void __stdcall func_006fd490(CAutoHidePanelTabManager*, int);

void CAutoHidePanelTabManager::SetActivePane(int pane)
{
    if (this->field_4 != pane) {
        void (__thiscall *fn)(CAutoHidePanelTabManager*) = *(void (__thiscall **)(CAutoHidePanelTabManager*))((char*)this->vtbl + 8);
        this->field_4 = pane;
        fn(this);
        func_006fd490(this, pane);
    }
}
