// roc 2007-03 00676860  unit: seg_00670000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00676860
//
// 00676860  56                   push esi
// 00676861  57                   push edi
// 00676862  8bf9                 mov edi, ecx
// 00676864  e887ffffff           call 0x6767f0
// 00676869  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067686d  8bf0                 mov esi, eax
// 0067686f  8b06                 mov eax, dword ptr [esi]
// 00676871  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00676877  51                   push ecx
// 00676878  57                   push edi
// 00676879  8bce                 mov ecx, esi
// 0067687b  ffd2                 call edx
// 0067687d  5f                   pop edi
// 0067687e  8bc6                 mov eax, esi
// 00676880  5e                   pop esi
// 00676881  c20400               ret 4
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
