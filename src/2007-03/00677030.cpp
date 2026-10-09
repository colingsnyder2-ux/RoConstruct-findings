// roc 2007-03 00677030  unit: seg_00670000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00677030
//
// 00677030  56                   push esi
// 00677031  57                   push edi
// 00677032  8bf9                 mov edi, ecx
// 00677034  e887ffffff           call 0x676fc0
// 00677039  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067703d  8bf0                 mov esi, eax
// 0067703f  8b06                 mov eax, dword ptr [esi]
// 00677041  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00677047  51                   push ecx
// 00677048  57                   push edi
// 00677049  8bce                 mov ecx, esi
// 0067704b  ffd2                 call edx
// 0067704d  5f                   pop edi
// 0067704e  8bc6                 mov eax, esi
// 00677050  5e                   pop esi
// 00677051  c20400               ret 4
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
