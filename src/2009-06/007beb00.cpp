// roc 2009-06 007beb00  unit: CXTPToolBar::CControlButtonHide  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007beb00
//
// 007beb00  56                   push esi
// 007beb01  57                   push edi
// 007beb02  8bf9                 mov edi, ecx
// 007beb04  e887ffffff           call 0x7bea90
// 007beb09  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007beb0d  8bf0                 mov esi, eax
// 007beb0f  8b06                 mov eax, dword ptr [esi]
// 007beb11  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007beb17  51                   push ecx
// 007beb18  57                   push edi
// 007beb19  8bce                 mov ecx, esi
// 007beb1b  ffd2                 call edx
// 007beb1d  5f                   pop edi
// 007beb1e  8bc6                 mov eax, esi
// 007beb20  5e                   pop esi
// 007beb21  c20400               ret 4
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
