// roc 2010-06 004558f0  unit: CRobloxControlMaterialSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004558f0
//
// 004558f0  56                   push esi
// 004558f1  57                   push edi
// 004558f2  8bf9                 mov edi, ecx
// 004558f4  e897ffffff           call 0x455890
// 004558f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004558fd  8bf0                 mov esi, eax
// 004558ff  8b06                 mov eax, dword ptr [esi]
// 00455901  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00455907  51                   push ecx
// 00455908  57                   push edi
// 00455909  8bce                 mov ecx, esi
// 0045590b  ffd2                 call edx
// 0045590d  5f                   pop edi
// 0045590e  8bc6                 mov eax, esi
// 00455910  5e                   pop esi
// 00455911  c20400               ret 4
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
