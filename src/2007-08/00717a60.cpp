// from server: 100% by colin
// roc 2007-08 00717a60  unit: CXTPRibbonTabPopupToolBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00717a60
//
// 00717a60  8b8960020000         mov ecx, dword ptr [ecx + 0x260]
// 00717a66  8b01                 mov eax, dword ptr [ecx]
// 00717a68  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 00717a6e  56                   push esi
// 00717a6f  8b742408             mov esi, dword ptr [esp + 8]
// 00717a73  56                   push esi
// 00717a74  ffd2                 call edx
// 00717a76  8bc6                 mov eax, esi
// 00717a78  5e                   pop esi
// 00717a79  c20400               ret 4

struct CXTPRibbonTabPopupToolBar
{
    char pad[0x260];
    void* field_260;
    void* method_00717a60(void* arg);
};

void* CXTPRibbonTabPopupToolBar::method_00717a60(void* arg)
{
    void* p = field_260;
    void** vtbl = *(void***)p;
    void* fn = vtbl[0x154 / 4];
    ((void (__thiscall*)(void*, void*))fn)(p, arg);
    return arg;
}
