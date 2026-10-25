// from server: 100% by tester
// roc 2010-06 008a2be0  unit: CXTPRibbonBarMorePopupToolBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a2be0
//
// 008a2be0  8b895c020000         mov ecx, dword ptr [ecx + 0x25c]
// 008a2be6  8b01                 mov eax, dword ptr [ecx]
// 008a2be8  8b905c010000         mov edx, dword ptr [eax + 0x15c]
// 008a2bee  56                   push esi
// 008a2bef  8b742408             mov esi, dword ptr [esp + 8]
// 008a2bf3  56                   push esi
// 008a2bf4  ffd2                 call edx
// 008a2bf6  8bc6                 mov eax, esi
// 008a2bf8  5e                   pop esi
// 008a2bf9  c20400               ret 4

struct CXTPRibbonTabPopupToolBar
{
    char pad[0x25c];
    void* field_260;
    void* method_00717a60(void* arg);
};

void* CXTPRibbonTabPopupToolBar::method_00717a60(void* arg)
{
    void* p = field_260;
    void** vtbl = *(void***)p;
    void* fn = vtbl[0x15c / 4];
    ((void (__thiscall*)(void*, void*))fn)(p, arg);
    return arg;
}