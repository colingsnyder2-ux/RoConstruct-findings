// roc 2007-03 00677d40  unit: seg_00670000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00677d40
//
// 00677d40  56                   push esi
// 00677d41  57                   push edi
// 00677d42  8bf9                 mov edi, ecx
// 00677d44  e887ffffff           call 0x677cd0
// 00677d49  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00677d4d  8bf0                 mov esi, eax
// 00677d4f  8b06                 mov eax, dword ptr [esi]
// 00677d51  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00677d57  51                   push ecx
// 00677d58  57                   push edi
// 00677d59  8bce                 mov ecx, esi
// 00677d5b  ffd2                 call edx
// 00677d5d  5f                   pop edi
// 00677d5e  8bc6                 mov eax, esi
// 00677d60  5e                   pop esi
// 00677d61  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX000027@@QAEPAXPAX@Z)

namespace ns_ROCX000027 {
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
