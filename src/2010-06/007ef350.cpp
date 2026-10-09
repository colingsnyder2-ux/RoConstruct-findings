// roc 2010-06 007ef350  unit: CXTPToolBar::CControlButtonExpand  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ef350
//
// 007ef350  56                   push esi
// 007ef351  57                   push edi
// 007ef352  8bf9                 mov edi, ecx
// 007ef354  e887ffffff           call 0x7ef2e0
// 007ef359  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007ef35d  8bf0                 mov esi, eax
// 007ef35f  8b06                 mov eax, dword ptr [esi]
// 007ef361  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007ef367  51                   push ecx
// 007ef368  57                   push edi
// 007ef369  8bce                 mov ecx, esi
// 007ef36b  ffd2                 call edx
// 007ef36d  5f                   pop edi
// 007ef36e  8bc6                 mov eax, esi
// 007ef370  5e                   pop esi
// 007ef371  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00002d@@QAEPAXPAX@Z)

namespace ns_ROCX00002d {
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
