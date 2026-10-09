// roc 2008-06 0042fdd0  unit: CPatchedControlComboBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042fdd0
//
// 0042fdd0  56                   push esi
// 0042fdd1  57                   push edi
// 0042fdd2  8bf9                 mov edi, ecx
// 0042fdd4  e877ffffff           call 0x42fd50
// 0042fdd9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042fddd  8bf0                 mov esi, eax
// 0042fddf  8b06                 mov eax, dword ptr [esi]
// 0042fde1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0042fde7  51                   push ecx
// 0042fde8  57                   push edi
// 0042fde9  8bce                 mov ecx, esi
// 0042fdeb  ffd2                 call edx
// 0042fded  5f                   pop edi
// 0042fdee  8bc6                 mov eax, esi
// 0042fdf0  5e                   pop esi
// 0042fdf1  c20400               ret 4
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
