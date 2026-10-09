// roc 2007-03 00622ef0  unit: seg_00620000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00622ef0
//
// 00622ef0  56                   push esi
// 00622ef1  57                   push edi
// 00622ef2  8bf9                 mov edi, ecx
// 00622ef4  e887ffffff           call 0x622e80
// 00622ef9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00622efd  8bf0                 mov esi, eax
// 00622eff  8b06                 mov eax, dword ptr [esi]
// 00622f01  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00622f07  51                   push ecx
// 00622f08  57                   push edi
// 00622f09  8bce                 mov ecx, esi
// 00622f0b  ffd2                 call edx
// 00622f0d  5f                   pop edi
// 00622f0e  8bc6                 mov eax, esi
// 00622f10  5e                   pop esi
// 00622f11  c20400               ret 4
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
