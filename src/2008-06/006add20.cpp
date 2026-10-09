// roc 2008-06 006add20  unit: CXTPControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006add20
//
// 006add20  56                   push esi
// 006add21  57                   push edi
// 006add22  8bf9                 mov edi, ecx
// 006add24  e887ffffff           call 0x6adcb0
// 006add29  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006add2d  8bf0                 mov esi, eax
// 006add2f  8b06                 mov eax, dword ptr [esi]
// 006add31  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 006add37  51                   push ecx
// 006add38  57                   push edi
// 006add39  8bce                 mov ecx, esi
// 006add3b  ffd2                 call edx
// 006add3d  5f                   pop edi
// 006add3e  8bc6                 mov eax, esi
// 006add40  5e                   pop esi
// 006add41  c20400               ret 4
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
