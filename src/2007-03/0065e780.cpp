// roc 2007-03 0065e780  unit: seg_00650000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065e780
//
// 0065e780  56                   push esi
// 0065e781  57                   push edi
// 0065e782  8bf9                 mov edi, ecx
// 0065e784  e887ffffff           call 0x65e710
// 0065e789  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065e78d  8bf0                 mov esi, eax
// 0065e78f  8b06                 mov eax, dword ptr [esi]
// 0065e791  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0065e797  51                   push ecx
// 0065e798  57                   push edi
// 0065e799  8bce                 mov ecx, esi
// 0065e79b  ffd2                 call edx
// 0065e79d  5f                   pop edi
// 0065e79e  8bc6                 mov eax, esi
// 0065e7a0  5e                   pop esi
// 0065e7a1  c20400               ret 4
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
