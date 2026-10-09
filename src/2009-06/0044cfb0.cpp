// roc 2009-06 0044cfb0  unit: CRobloxControlColorSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044cfb0
//
// 0044cfb0  56                   push esi
// 0044cfb1  57                   push edi
// 0044cfb2  8bf9                 mov edi, ecx
// 0044cfb4  e897ffffff           call 0x44cf50
// 0044cfb9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044cfbd  8bf0                 mov esi, eax
// 0044cfbf  8b06                 mov eax, dword ptr [esi]
// 0044cfc1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0044cfc7  51                   push ecx
// 0044cfc8  57                   push edi
// 0044cfc9  8bce                 mov ecx, esi
// 0044cfcb  ffd2                 call edx
// 0044cfcd  5f                   pop edi
// 0044cfce  8bc6                 mov eax, esi
// 0044cfd0  5e                   pop esi
// 0044cfd1  c20400               ret 4
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
