// roc 2007-03 006a37c0  unit: seg_006a0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006a37c0
//
// 006a37c0  56                   push esi
// 006a37c1  57                   push edi
// 006a37c2  8bf9                 mov edi, ecx
// 006a37c4  e887ffffff           call 0x6a3750
// 006a37c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a37cd  8bf0                 mov esi, eax
// 006a37cf  8b06                 mov eax, dword ptr [esi]
// 006a37d1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006a37d7  51                   push ecx
// 006a37d8  57                   push edi
// 006a37d9  8bce                 mov ecx, esi
// 006a37db  ffd2                 call edx
// 006a37dd  5f                   pop edi
// 006a37de  8bc6                 mov eax, esi
// 006a37e0  5e                   pop esi
// 006a37e1  c20400               ret 4
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
