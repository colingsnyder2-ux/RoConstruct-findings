// roc 2007-03 007124c0  unit: seg_00710000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007124c0
//
// 007124c0  56                   push esi
// 007124c1  57                   push edi
// 007124c2  8bf9                 mov edi, ecx
// 007124c4  e887ffffff           call 0x712450
// 007124c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007124cd  8bf0                 mov esi, eax
// 007124cf  8b06                 mov eax, dword ptr [esi]
// 007124d1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007124d7  51                   push ecx
// 007124d8  57                   push edi
// 007124d9  8bce                 mov ecx, esi
// 007124db  ffd2                 call edx
// 007124dd  5f                   pop edi
// 007124de  8bc6                 mov eax, esi
// 007124e0  5e                   pop esi
// 007124e1  c20400               ret 4
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
