// roc 2010-06 0087a2a0  unit: CXTPControlCustom  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087a2a0
//
// 0087a2a0  56                   push esi
// 0087a2a1  57                   push edi
// 0087a2a2  8bf9                 mov edi, ecx
// 0087a2a4  e887ffffff           call 0x87a230
// 0087a2a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087a2ad  8bf0                 mov esi, eax
// 0087a2af  8b06                 mov eax, dword ptr [esi]
// 0087a2b1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0087a2b7  51                   push ecx
// 0087a2b8  57                   push edi
// 0087a2b9  8bce                 mov ecx, esi
// 0087a2bb  ffd2                 call edx
// 0087a2bd  5f                   pop edi
// 0087a2be  8bc6                 mov eax, esi
// 0087a2c0  5e                   pop esi
// 0087a2c1  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00002d@@QAEPAXPAX@Z)

namespace ns_ROCX00002d {
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
