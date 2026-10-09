// roc 2010-06 007f02e0  unit: CPatchedControlComboBox  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f02e0
//
// 007f02e0  8b442408             mov eax, dword ptr [esp + 8]
// 007f02e4  85c0                 test eax, eax
// 007f02e6  7512                 jne 0x7f02fa
// 007f02e8  56                   push esi
// 007f02e9  8b742408             mov esi, dword ptr [esp + 8]
// 007f02ed  50                   push eax
// 007f02ee  56                   push esi
// 007f02ef  e8acffffff           call 0x7f02a0
// 007f02f4  8bc6                 mov eax, esi
// 007f02f6  5e                   pop esi
// 007f02f7  c20800               ret 8
// 007f02fa  8b4020               mov eax, dword ptr [eax + 0x20]
// 007f02fd  56                   push esi
// 007f02fe  8b742408             mov esi, dword ptr [esp + 8]
// 007f0302  50                   push eax
// 007f0303  56                   push esi
// 007f0304  e897ffffff           call 0x7f02a0
// 007f0309  8bc6                 mov eax, esi
// 007f030b  5e                   pop esi
// 007f030c  c20800               ret 8
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
