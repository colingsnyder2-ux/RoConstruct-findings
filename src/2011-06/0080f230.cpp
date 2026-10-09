// roc 2011-06 0080f230  unit: CXTPControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080f230
//
// 0080f230  56                   push esi
// 0080f231  57                   push edi
// 0080f232  8bf9                 mov edi, ecx
// 0080f234  e887ffffff           call 0x80f1c0
// 0080f239  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080f23d  8bf0                 mov esi, eax
// 0080f23f  8b06                 mov eax, dword ptr [esi]
// 0080f241  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0080f247  51                   push ecx
// 0080f248  57                   push edi
// 0080f249  8bce                 mov ecx, esi
// 0080f24b  ffd2                 call edx
// 0080f24d  5f                   pop edi
// 0080f24e  8bc6                 mov eax, esi
// 0080f250  5e                   pop esi
// 0080f251  c20400               ret 4
// copied from an identical function in another client (function ?sub_44cbb0@CRobloxControlColorSelector@ns_ROCX00002f@@QAEPAXPAX@Z)

namespace ns_ROCX00002f {
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
