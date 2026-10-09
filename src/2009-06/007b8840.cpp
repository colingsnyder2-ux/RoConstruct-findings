// roc 2009-06 007b8840  unit: CXTPRibbonBarControlQuickAccessPopup  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b8840
//
// 007b8840  56                   push esi
// 007b8841  57                   push edi
// 007b8842  8bf9                 mov edi, ecx
// 007b8844  e887ffffff           call 0x7b87d0
// 007b8849  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b884d  8bf0                 mov esi, eax
// 007b884f  8b06                 mov eax, dword ptr [esi]
// 007b8851  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007b8857  51                   push ecx
// 007b8858  57                   push edi
// 007b8859  8bce                 mov ecx, esi
// 007b885b  ffd2                 call edx
// 007b885d  5f                   pop edi
// 007b885e  8bc6                 mov eax, esi
// 007b8860  5e                   pop esi
// 007b8861  c20400               ret 4
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
