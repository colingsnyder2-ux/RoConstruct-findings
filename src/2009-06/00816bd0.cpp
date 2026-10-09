// roc 2009-06 00816bd0  unit: CXTPRibbonControlSystemRecentFileList  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00816bd0
//
// 00816bd0  56                   push esi
// 00816bd1  57                   push edi
// 00816bd2  8bf9                 mov edi, ecx
// 00816bd4  e887ffffff           call 0x816b60
// 00816bd9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00816bdd  8bf0                 mov esi, eax
// 00816bdf  8b06                 mov eax, dword ptr [esi]
// 00816be1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00816be7  51                   push ecx
// 00816be8  57                   push edi
// 00816be9  8bce                 mov ecx, esi
// 00816beb  ffd2                 call edx
// 00816bed  5f                   pop edi
// 00816bee  8bc6                 mov eax, esi
// 00816bf0  5e                   pop esi
// 00816bf1  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX000023@@QAEPAXPAX@Z)

namespace ns_ROCX000023 {
struct CRobloxControlColorSelector {
    void* sub_44cb40();
    void* sub_44cbb0(void* arg);
};

void* CRobloxControlColorSelector::sub_44cbb0(void* arg)
{
    void* p = sub_44cb40();
    void** vtbl = *(void***)p;
    void (__thiscall *fn)(void*, void*, void*) = (void (__thiscall *)(void*, void*, void*))vtbl[0x38];
    fn(p, this, arg);
    return p;
}
}
