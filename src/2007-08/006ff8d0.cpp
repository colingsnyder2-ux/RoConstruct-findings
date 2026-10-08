// from server: 92% by colin
// roc 2007-08 006ff8d0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ff8d0
//
// 006ff8d0  56                   push esi
// 006ff8d1  57                   push edi
// 006ff8d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006ff8d6  85ff                 test edi, edi
// 006ff8d8  8bf1                 mov esi, ecx
// 006ff8da  7427                 je 0x6ff903
// 006ff8dc  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 006ff8e2  85c9                 test ecx, ecx
// 006ff8e4  7408                 je 0x6ff8ee
// 006ff8e6  8b01                 mov eax, dword ptr [ecx]
// 006ff8e8  8b10                 mov edx, dword ptr [eax]
// 006ff8ea  6a01                 push 1
// 006ff8ec  ffd2                 call edx
// 006ff8ee  89bee4000000         mov dword ptr [esi + 0xe4], edi
// 006ff8f4  8b07                 mov eax, dword ptr [edi]
// 006ff8f6  8b5004               mov edx, dword ptr [eax + 4]
// 006ff8f9  8bcf                 mov ecx, edi
// 006ff8fb  89b704020000         mov dword ptr [edi + 0x204], esi
// 006ff901  ffd2                 call edx
// 006ff903  8b06                 mov eax, dword ptr [esi]
// 006ff905  8b5070               mov edx, dword ptr [eax + 0x70]
// 006ff908  8bce                 mov ecx, esi
// 006ff90a  ffd2                 call edx
// 006ff90c  8bc7                 mov eax, edi
// 006ff90e  5f                   pop edi
// 006ff90f  5e                   pop esi
// 006ff910  c20400               ret 4

struct CAutoHidePanelTabManager {
    int field_0;
    char pad[0xe0];
    void* field_e4;
    void* setTab(void* tab);
};

void* CAutoHidePanelTabManager::setTab(void* tab)
{
    if (tab != 0) {
        void* old = field_e4;
        if (old != 0) {
            void** vtbl = *(void***)old;
            void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))vtbl[0];
            fn(old, 1);
        }
        field_e4 = tab;
        void** vtbl2 = *(void***)tab;
        void (__thiscall *fn2)(void*) = (void (__thiscall *)(void*))vtbl2[1];
        *(void**)((char*)tab + 0x204) = this;
        fn2(tab);
    }
    void** vtbl3 = *(void***)this;
    void (__thiscall *fn3)(void*) = (void (__thiscall *)(void*))vtbl3[0x70 / 4];
    fn3(this);
    return tab;
}
