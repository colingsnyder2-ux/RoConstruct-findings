// roc 2009-06 0080eb20  unit: CXTPRibbonGroupControlPopup  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080eb20
//
// 0080eb20  56                   push esi
// 0080eb21  57                   push edi
// 0080eb22  8bf9                 mov edi, ecx
// 0080eb24  e887ffffff           call 0x80eab0
// 0080eb29  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080eb2d  8bf0                 mov esi, eax
// 0080eb2f  8b06                 mov eax, dword ptr [esi]
// 0080eb31  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0080eb37  51                   push ecx
// 0080eb38  57                   push edi
// 0080eb39  8bce                 mov ecx, esi
// 0080eb3b  ffd2                 call edx
// 0080eb3d  5f                   pop edi
// 0080eb3e  8bc6                 mov eax, esi
// 0080eb40  5e                   pop esi
// 0080eb41  c20400               ret 4
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
