// roc 2007-03 00686890  unit: seg_00680000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686890
//
// 00686890  8b442408             mov eax, dword ptr [esp + 8]
// 00686894  85c0                 test eax, eax
// 00686896  7512                 jne 0x6868aa
// 00686898  56                   push esi
// 00686899  8b742408             mov esi, dword ptr [esp + 8]
// 0068689d  50                   push eax
// 0068689e  56                   push esi
// 0068689f  e81cffffff           call 0x6867c0
// 006868a4  8bc6                 mov eax, esi
// 006868a6  5e                   pop esi
// 006868a7  c20800               ret 8
// 006868aa  8b4020               mov eax, dword ptr [eax + 0x20]
// 006868ad  56                   push esi
// 006868ae  8b742408             mov esi, dword ptr [esp + 8]
// 006868b2  50                   push eax
// 006868b3  56                   push esi
// 006868b4  e807ffffff           call 0x6867c0
// 006868b9  8bc6                 mov eax, esi
// 006868bb  5e                   pop esi
// 006868bc  c20800               ret 8
// copied from an identical function in another client (function ?fn_ROCX00000d@ns_ROCX00000d@@YGPAXPAXPAUCPropertyGridItemBrickColor@1@@Z)

namespace ns_ROCX00000d {
struct CPropertyGridItemBrickColor
{
    char pad[0x20];
    void* field_20;
};

void __stdcall fn_ROCX00000d(void* dst, void* src);

void* __stdcall fn_ROCX00000d(void* dst, CPropertyGridItemBrickColor* src)
{
    void* value;
    if (src == 0)
        value = 0;
    else
        value = src->field_20;
    fn_ROCX00000d(dst, value);
    return dst;
}
}
