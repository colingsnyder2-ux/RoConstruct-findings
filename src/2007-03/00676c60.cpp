// roc 2007-03 00676c60  unit: seg_00670000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00676c60
//
// 00676c60  56                   push esi
// 00676c61  57                   push edi
// 00676c62  8bf9                 mov edi, ecx
// 00676c64  e887ffffff           call 0x676bf0
// 00676c69  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00676c6d  8bf0                 mov esi, eax
// 00676c6f  8b06                 mov eax, dword ptr [esi]
// 00676c71  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00676c77  51                   push ecx
// 00676c78  57                   push edi
// 00676c79  8bce                 mov ecx, esi
// 00676c7b  ffd2                 call edx
// 00676c7d  5f                   pop edi
// 00676c7e  8bc6                 mov eax, esi
// 00676c80  5e                   pop esi
// 00676c81  c20400               ret 4
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
