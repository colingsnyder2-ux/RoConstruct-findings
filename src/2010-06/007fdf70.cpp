// roc 2010-06 007fdf70  unit: CXTPControlRadioButton  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fdf70
//
// 007fdf70  56                   push esi
// 007fdf71  57                   push edi
// 007fdf72  8bf9                 mov edi, ecx
// 007fdf74  e887ffffff           call 0x7fdf00
// 007fdf79  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007fdf7d  8bf0                 mov esi, eax
// 007fdf7f  8b06                 mov eax, dword ptr [esi]
// 007fdf81  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 007fdf87  51                   push ecx
// 007fdf88  57                   push edi
// 007fdf89  8bce                 mov ecx, esi
// 007fdf8b  ffd2                 call edx
// 007fdf8d  5f                   pop edi
// 007fdf8e  8bc6                 mov eax, esi
// 007fdf90  5e                   pop esi
// 007fdf91  c20400               ret 4
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
