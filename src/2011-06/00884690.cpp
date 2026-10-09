// roc 2011-06 00884690  unit: CXTPControlGallery  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00884690
//
// 00884690  56                   push esi
// 00884691  57                   push edi
// 00884692  8bf9                 mov edi, ecx
// 00884694  e887ffffff           call 0x884620
// 00884699  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088469d  8bf0                 mov esi, eax
// 0088469f  8b06                 mov eax, dword ptr [esi]
// 008846a1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 008846a7  51                   push ecx
// 008846a8  57                   push edi
// 008846a9  8bce                 mov ecx, esi
// 008846ab  ffd2                 call edx
// 008846ad  5f                   pop edi
// 008846ae  8bc6                 mov eax, esi
// 008846b0  5e                   pop esi
// 008846b1  c20400               ret 4
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
