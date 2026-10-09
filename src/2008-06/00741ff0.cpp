// roc 2008-06 00741ff0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00741ff0
//
// 00741ff0  56                   push esi
// 00741ff1  57                   push edi
// 00741ff2  8bf9                 mov edi, ecx
// 00741ff4  e887ffffff           call 0x741f80
// 00741ff9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00741ffd  8bf0                 mov esi, eax
// 00741fff  8b06                 mov eax, dword ptr [esi]
// 00742001  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00742007  51                   push ecx
// 00742008  57                   push edi
// 00742009  8bce                 mov ecx, esi
// 0074200b  ffd2                 call edx
// 0074200d  5f                   pop edi
// 0074200e  8bc6                 mov eax, esi
// 00742010  5e                   pop esi
// 00742011  c20400               ret 4
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
