// roc 2010-06 00454640  unit: CRobloxControlColorSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00454640
//
// 00454640  56                   push esi
// 00454641  57                   push edi
// 00454642  8bf9                 mov edi, ecx
// 00454644  e897ffffff           call 0x4545e0
// 00454649  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045464d  8bf0                 mov esi, eax
// 0045464f  8b06                 mov eax, dword ptr [esi]
// 00454651  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00454657  51                   push ecx
// 00454658  57                   push edi
// 00454659  8bce                 mov ecx, esi
// 0045465b  ffd2                 call edx
// 0045465d  5f                   pop edi
// 0045465e  8bc6                 mov eax, esi
// 00454660  5e                   pop esi
// 00454661  c20400               ret 4
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
