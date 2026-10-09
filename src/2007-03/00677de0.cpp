// roc 2007-03 00677de0  unit: seg_00670000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00677de0
//
// 00677de0  56                   push esi
// 00677de1  57                   push edi
// 00677de2  8bf9                 mov edi, ecx
// 00677de4  e887ffffff           call 0x677d70
// 00677de9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00677ded  8bf0                 mov esi, eax
// 00677def  8b06                 mov eax, dword ptr [esi]
// 00677df1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00677df7  51                   push ecx
// 00677df8  57                   push edi
// 00677df9  8bce                 mov ecx, esi
// 00677dfb  ffd2                 call edx
// 00677dfd  5f                   pop edi
// 00677dfe  8bc6                 mov eax, esi
// 00677e00  5e                   pop esi
// 00677e01  c20400               ret 4
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
