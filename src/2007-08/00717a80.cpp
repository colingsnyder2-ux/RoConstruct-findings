// from server: 100% by colin
// roc 2007-08 00717a80  unit: CXTPRibbonTabPopupToolBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00717a80
//
// 00717a80  8b8960020000         mov ecx, dword ptr [ecx + 0x260]
// 00717a86  8b01                 mov eax, dword ptr [ecx]
// 00717a88  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00717a8e  56                   push esi
// 00717a8f  8b742408             mov esi, dword ptr [esp + 8]
// 00717a93  56                   push esi
// 00717a94  ffd2                 call edx
// 00717a96  8bc6                 mov eax, esi
// 00717a98  5e                   pop esi
// 00717a99  c20400               ret 4

struct CXTPRibbonTabPopupToolBar
{
    char pad[0x260];
    void* field_260;
    void* method_150(void*);
};

void* CXTPRibbonTabPopupToolBar::method_150(void* arg)
{
    void* p = field_260;
    void** vtbl = *(void***)p;
    void* (__thiscall *fn)(void*, void*) = (void* (__thiscall *)(void*, void*))vtbl[0x150 / 4];
    fn(p, arg);
    return arg;
}
