// from server: 79% by colin
// roc 2007-08 00564810  unit: CXTPDockingPaneAutoHidePanel  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00564810
//
// 00564810  56                   push esi
// 00564811  8bf1                 mov esi, ecx
// 00564813  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00564817  8b01                 mov eax, dword ptr [ecx]
// 00564819  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0056481c  57                   push edi
// 0056481d  8b3e                 mov edi, dword ptr [esi]
// 0056481f  51                   push ecx
// 00564820  ffd2                 call edx
// 00564822  50                   push eax
// 00564823  8b07                 mov eax, dword ptr [edi]
// 00564825  8bce                 mov ecx, esi
// 00564827  ffd0                 call eax
// 00564829  5f                   pop edi
// 0056482a  5e                   pop esi
// 0056482b  c20400               ret 4

struct CXTPDockingPaneAutoHidePanel {
    void AddPane(void* pane);
};

void CXTPDockingPaneAutoHidePanel::AddPane(void* pane) {
    void** vtbl = *(void***)pane;
    void* result = ((void* (__thiscall*)(void*, void*))vtbl[15])(pane, pane);
    void** selfVtbl = *(void***)this;
    ((void (__thiscall*)(void*, void*))selfVtbl[0])(this, result);
}
