// roc 2007-03 0065ec10  unit: seg_00650000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065ec10
//
// 0065ec10  56                   push esi
// 0065ec11  57                   push edi
// 0065ec12  8bf9                 mov edi, ecx
// 0065ec14  e887ffffff           call 0x65eba0
// 0065ec19  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065ec1d  8bf0                 mov esi, eax
// 0065ec1f  8b06                 mov eax, dword ptr [esi]
// 0065ec21  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0065ec27  51                   push ecx
// 0065ec28  57                   push edi
// 0065ec29  8bce                 mov ecx, esi
// 0065ec2b  ffd2                 call edx
// 0065ec2d  5f                   pop edi
// 0065ec2e  8bc6                 mov eax, esi
// 0065ec30  5e                   pop esi
// 0065ec31  c20400               ret 4
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
