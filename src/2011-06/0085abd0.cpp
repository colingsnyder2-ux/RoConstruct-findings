// roc 2011-06 0085abd0  unit: CXTPControlOleItems  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085abd0
//
// 0085abd0  56                   push esi
// 0085abd1  57                   push edi
// 0085abd2  8bf9                 mov edi, ecx
// 0085abd4  e887ffffff           call 0x85ab60
// 0085abd9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085abdd  8bf0                 mov esi, eax
// 0085abdf  8b06                 mov eax, dword ptr [esi]
// 0085abe1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0085abe7  51                   push ecx
// 0085abe8  57                   push edi
// 0085abe9  8bce                 mov ecx, esi
// 0085abeb  ffd2                 call edx
// 0085abed  5f                   pop edi
// 0085abee  8bc6                 mov eax, esi
// 0085abf0  5e                   pop esi
// 0085abf1  c20400               ret 4
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
