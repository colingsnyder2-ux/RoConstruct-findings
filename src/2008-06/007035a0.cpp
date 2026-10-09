// roc 2008-06 007035a0  unit: CXTPControlTabWorkspace  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007035a0
//
// 007035a0  56                   push esi
// 007035a1  57                   push edi
// 007035a2  8bf9                 mov edi, ecx
// 007035a4  e887ffffff           call 0x703530
// 007035a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007035ad  8bf0                 mov esi, eax
// 007035af  8b06                 mov eax, dword ptr [esi]
// 007035b1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007035b7  51                   push ecx
// 007035b8  57                   push edi
// 007035b9  8bce                 mov ecx, esi
// 007035bb  ffd2                 call edx
// 007035bd  5f                   pop edi
// 007035be  8bc6                 mov eax, esi
// 007035c0  5e                   pop esi
// 007035c1  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00003c@@QAEPAXPAX@Z)

namespace ns_ROCX00003c {
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
