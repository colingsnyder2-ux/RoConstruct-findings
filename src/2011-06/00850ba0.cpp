// roc 2011-06 00850ba0  unit: CXTPToolBar::CControlButtonExpand  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00850ba0
//
// 00850ba0  56                   push esi
// 00850ba1  57                   push edi
// 00850ba2  8bf9                 mov edi, ecx
// 00850ba4  e887ffffff           call 0x850b30
// 00850ba9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00850bad  8bf0                 mov esi, eax
// 00850baf  8b06                 mov eax, dword ptr [esi]
// 00850bb1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00850bb7  51                   push ecx
// 00850bb8  57                   push edi
// 00850bb9  8bce                 mov ecx, esi
// 00850bbb  ffd2                 call edx
// 00850bbd  5f                   pop edi
// 00850bbe  8bc6                 mov eax, esi
// 00850bc0  5e                   pop esi
// 00850bc1  c20400               ret 4
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
