// roc 2007-03 0044b710  unit: seg_00440000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044b710
//
// 0044b710  56                   push esi
// 0044b711  57                   push edi
// 0044b712  8bf9                 mov edi, ecx
// 0044b714  e887ffffff           call 0x44b6a0
// 0044b719  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044b71d  8bf0                 mov esi, eax
// 0044b71f  8b06                 mov eax, dword ptr [esi]
// 0044b721  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0044b727  51                   push ecx
// 0044b728  57                   push edi
// 0044b729  8bce                 mov ecx, esi
// 0044b72b  ffd2                 call edx
// 0044b72d  5f                   pop edi
// 0044b72e  8bc6                 mov eax, esi
// 0044b730  5e                   pop esi
// 0044b731  c20400               ret 4
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
