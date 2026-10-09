// roc 2008-06 0044ee50  unit: CRobloxControlColorSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044ee50
//
// 0044ee50  56                   push esi
// 0044ee51  57                   push edi
// 0044ee52  8bf9                 mov edi, ecx
// 0044ee54  e897ffffff           call 0x44edf0
// 0044ee59  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044ee5d  8bf0                 mov esi, eax
// 0044ee5f  8b06                 mov eax, dword ptr [esi]
// 0044ee61  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0044ee67  51                   push ecx
// 0044ee68  57                   push edi
// 0044ee69  8bce                 mov ecx, esi
// 0044ee6b  ffd2                 call edx
// 0044ee6d  5f                   pop edi
// 0044ee6e  8bc6                 mov eax, esi
// 0044ee70  5e                   pop esi
// 0044ee71  c20400               ret 4
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
