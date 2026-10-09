// roc 2010-06 007f0470  unit: CPatchedControlComboBox  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f0470
//
// 007f0470  8b442408             mov eax, dword ptr [esp + 8]
// 007f0474  85c0                 test eax, eax
// 007f0476  7512                 jne 0x7f048a
// 007f0478  56                   push esi
// 007f0479  8b742408             mov esi, dword ptr [esp + 8]
// 007f047d  50                   push eax
// 007f047e  56                   push esi
// 007f047f  e81cffffff           call 0x7f03a0
// 007f0484  8bc6                 mov eax, esi
// 007f0486  5e                   pop esi
// 007f0487  c20800               ret 8
// 007f048a  8b4020               mov eax, dword ptr [eax + 0x20]
// 007f048d  56                   push esi
// 007f048e  8b742408             mov esi, dword ptr [esp + 8]
// 007f0492  50                   push eax
// 007f0493  56                   push esi
// 007f0494  e807ffffff           call 0x7f03a0
// 007f0499  8bc6                 mov eax, esi
// 007f049b  5e                   pop esi
// 007f049c  c20800               ret 8
// copied from an identical function in another client (function ?fn_ROCX000001@ns_ROCX000001@@YGPAXPAXPAUCPropertyGridItemBrickColor@1@@Z)

namespace ns_ROCX000001 {
struct CPropertyGridItemBrickColor
{
    char pad[0x20];
    void* field_20;
};

void __stdcall fn_ROCX000001(void* dst, void* src);

void* __stdcall fn_ROCX000001(void* dst, CPropertyGridItemBrickColor* src)
{
    void* value;
    if (src == 0)
        value = 0;
    else
        value = src->field_20;
    fn_ROCX000001(dst, value);
    return dst;
}
}
