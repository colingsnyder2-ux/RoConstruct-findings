// from server: 100% by tester
// roc 2010-06 008a2bc0  unit: CXTPRibbonBarMorePopupToolBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a2bc0
//
// 008a2bc0  8b895c020000         mov ecx, dword ptr [ecx + 0x25c]
// 008a2bc6  8b01                 mov eax, dword ptr [ecx]
// 008a2bc8  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008a2bce  56                   push esi
// 008a2bcf  8b742408             mov esi, dword ptr [esp + 8]
// 008a2bd3  56                   push esi
// 008a2bd4  ffd2                 call edx
// 008a2bd6  8bc6                 mov eax, esi
// 008a2bd8  5e                   pop esi
// 008a2bd9  c20400               ret 4

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
    void* fn = vtbl[0x158 / 4];
    ((void (__thiscall*)(void*, void*))fn)(p, arg);
    return arg;
}