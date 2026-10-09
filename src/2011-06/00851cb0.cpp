// roc 2011-06 00851cb0  unit: CSourceStream  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851cb0
//
// 00851cb0  8b442408             mov eax, dword ptr [esp + 8]
// 00851cb4  85c0                 test eax, eax
// 00851cb6  7512                 jne 0x851cca
// 00851cb8  56                   push esi
// 00851cb9  8b742408             mov esi, dword ptr [esp + 8]
// 00851cbd  50                   push eax
// 00851cbe  56                   push esi
// 00851cbf  e81cffffff           call 0x851be0
// 00851cc4  8bc6                 mov eax, esi
// 00851cc6  5e                   pop esi
// 00851cc7  c20800               ret 8
// 00851cca  8b4020               mov eax, dword ptr [eax + 0x20]
// 00851ccd  56                   push esi
// 00851cce  8b742408             mov esi, dword ptr [esp + 8]
// 00851cd2  50                   push eax
// 00851cd3  56                   push esi
// 00851cd4  e807ffffff           call 0x851be0
// 00851cd9  8bc6                 mov eax, esi
// 00851cdb  5e                   pop esi
// 00851cdc  c20800               ret 8
// copied from an identical function in another client (function ?fn_ROCX00000c@ns_ROCX00000c@@YGPAXPAXPAUCPropertyGridItemBrickColor@1@@Z)

namespace ns_ROCX00000c {
struct CPropertyGridItemBrickColor
{
    char pad[0x20];
    void* field_20;
};

void __stdcall fn_ROCX00000c(void* dst, void* src);

void* __stdcall fn_ROCX00000c(void* dst, CPropertyGridItemBrickColor* src)
{
    void* value;
    if (src == 0)
        value = 0;
    else
        value = src->field_20;
    fn_ROCX00000c(dst, value);
    return dst;
}
}
