// roc 2008-06 00730da0  unit: CXTPControlGallery  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00730da0
//
// 00730da0  56                   push esi
// 00730da1  57                   push edi
// 00730da2  8bf9                 mov edi, ecx
// 00730da4  e887ffffff           call 0x730d30
// 00730da9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00730dad  8bf0                 mov esi, eax
// 00730daf  8b06                 mov eax, dword ptr [esi]
// 00730db1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00730db7  51                   push ecx
// 00730db8  57                   push edi
// 00730db9  8bce                 mov ecx, esi
// 00730dbb  ffd2                 call edx
// 00730dbd  5f                   pop edi
// 00730dbe  8bc6                 mov eax, esi
// 00730dc0  5e                   pop esi
// 00730dc1  c20400               ret 4
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
