// roc 2007-03 006b4fb0  unit: seg_006b0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b4fb0
//
// 006b4fb0  56                   push esi
// 006b4fb1  57                   push edi
// 006b4fb2  8bf9                 mov edi, ecx
// 006b4fb4  e887ffffff           call 0x6b4f40
// 006b4fb9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b4fbd  8bf0                 mov esi, eax
// 006b4fbf  8b06                 mov eax, dword ptr [esi]
// 006b4fc1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006b4fc7  51                   push ecx
// 006b4fc8  57                   push edi
// 006b4fc9  8bce                 mov ecx, esi
// 006b4fcb  ffd2                 call edx
// 006b4fcd  5f                   pop edi
// 006b4fce  8bc6                 mov eax, esi
// 006b4fd0  5e                   pop esi
// 006b4fd1  c20400               ret 4
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
