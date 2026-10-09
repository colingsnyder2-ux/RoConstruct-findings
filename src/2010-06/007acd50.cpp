// roc 2010-06 007acd50  unit: CXTPControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007acd50
//
// 007acd50  56                   push esi
// 007acd51  57                   push edi
// 007acd52  8bf9                 mov edi, ecx
// 007acd54  e887ffffff           call 0x7acce0
// 007acd59  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007acd5d  8bf0                 mov esi, eax
// 007acd5f  8b06                 mov eax, dword ptr [esi]
// 007acd61  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007acd67  51                   push ecx
// 007acd68  57                   push edi
// 007acd69  8bce                 mov ecx, esi
// 007acd6b  ffd2                 call edx
// 007acd6d  5f                   pop edi
// 007acd6e  8bc6                 mov eax, esi
// 007acd70  5e                   pop esi
// 007acd71  c20400               ret 4
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
