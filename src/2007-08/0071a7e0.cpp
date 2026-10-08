// from server: 100% by colin
// roc 2007-08 0071a7e0  unit: CXTPRibbonControlSystemRecentFileList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071a7e0
//
// 0071a7e0  56                   push esi
// 0071a7e1  57                   push edi
// 0071a7e2  8bf9                 mov edi, ecx
// 0071a7e4  e887ffffff           call 0x71a770
// 0071a7e9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071a7ed  8bf0                 mov esi, eax
// 0071a7ef  8b06                 mov eax, dword ptr [esi]
// 0071a7f1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0071a7f7  51                   push ecx
// 0071a7f8  57                   push edi
// 0071a7f9  8bce                 mov ecx, esi
// 0071a7fb  ffd2                 call edx
// 0071a7fd  5f                   pop edi
// 0071a7fe  8bc6                 mov eax, esi
// 0071a800  5e                   pop esi
// 0071a801  c20400               ret 4

struct CXTPRibbonControlSystemRecentFileList {
    void* f(int a1);
};

extern "C" void* __fastcall sub_0071A770(void* self);

void* CXTPRibbonControlSystemRecentFileList::f(int a1)
{
    void* p = sub_0071A770(this);
    void** vt = *(void***)p;
    void (__thiscall *fn)(void*, void*, int) = (void (__thiscall *)(void*, void*, int))vt[0x38];
    fn(p, this, a1);
    return p;
}
