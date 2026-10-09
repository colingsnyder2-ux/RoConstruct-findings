// roc 2011-06 008f6fc0  unit: CXTPRibbonGroupControlPopup  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f6fc0
//
// 008f6fc0  56                   push esi
// 008f6fc1  57                   push edi
// 008f6fc2  8bf9                 mov edi, ecx
// 008f6fc4  e887ffffff           call 0x8f6f50
// 008f6fc9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f6fcd  8bf0                 mov esi, eax
// 008f6fcf  8b06                 mov eax, dword ptr [esi]
// 008f6fd1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008f6fd7  51                   push ecx
// 008f6fd8  57                   push edi
// 008f6fd9  8bce                 mov ecx, esi
// 008f6fdb  ffd2                 call edx
// 008f6fdd  5f                   pop edi
// 008f6fde  8bc6                 mov eax, esi
// 008f6fe0  5e                   pop esi
// 008f6fe1  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00002f@@QAEPAXPAX@Z)

namespace ns_ROCX00002f {
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
