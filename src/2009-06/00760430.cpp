// roc 2009-06 00760430  unit: CXTPToolBar::CControlButtonExpand  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00760430
//
// 00760430  56                   push esi
// 00760431  57                   push edi
// 00760432  8bf9                 mov edi, ecx
// 00760434  e887ffffff           call 0x7603c0
// 00760439  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076043d  8bf0                 mov esi, eax
// 0076043f  8b06                 mov eax, dword ptr [esi]
// 00760441  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00760447  51                   push ecx
// 00760448  57                   push edi
// 00760449  8bce                 mov ecx, esi
// 0076044b  ffd2                 call edx
// 0076044d  5f                   pop edi
// 0076044e  8bc6                 mov eax, esi
// 00760450  5e                   pop esi
// 00760451  c20400               ret 4
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
