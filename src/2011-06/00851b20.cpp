// roc 2011-06 00851b20  unit: CSourceStream  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851b20
//
// 00851b20  8b442408             mov eax, dword ptr [esp + 8]
// 00851b24  85c0                 test eax, eax
// 00851b26  7512                 jne 0x851b3a
// 00851b28  56                   push esi
// 00851b29  8b742408             mov esi, dword ptr [esp + 8]
// 00851b2d  50                   push eax
// 00851b2e  56                   push esi
// 00851b2f  e8acffffff           call 0x851ae0
// 00851b34  8bc6                 mov eax, esi
// 00851b36  5e                   pop esi
// 00851b37  c20800               ret 8
// 00851b3a  8b4020               mov eax, dword ptr [eax + 0x20]
// 00851b3d  56                   push esi
// 00851b3e  8b742408             mov esi, dword ptr [esp + 8]
// 00851b42  50                   push eax
// 00851b43  56                   push esi
// 00851b44  e897ffffff           call 0x851ae0
// 00851b49  8bc6                 mov eax, esi
// 00851b4b  5e                   pop esi
// 00851b4c  c20800               ret 8
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
