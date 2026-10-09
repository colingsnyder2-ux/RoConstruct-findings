// roc 2009-12 008f21f0  unit: CXTPRibbonControlSystemPopupBarButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f21f0
//
// 008f21f0  56                   push esi
// 008f21f1  57                   push edi
// 008f21f2  8bf9                 mov edi, ecx
// 008f21f4  e887ffffff           call 0x8f2180
// 008f21f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f21fd  8bf0                 mov esi, eax
// 008f21ff  8b06                 mov eax, dword ptr [esi]
// 008f2201  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008f2207  51                   push ecx
// 008f2208  57                   push edi
// 008f2209  8bce                 mov ecx, esi
// 008f220b  ffd2                 call edx
// 008f220d  5f                   pop edi
// 008f220e  8bc6                 mov eax, esi
// 008f2210  5e                   pop esi
// 008f2211  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX000031@@QAEPAXPAX@Z)

namespace ns_ROCX000031 {
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
