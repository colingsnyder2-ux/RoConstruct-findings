// roc 2009-12 0083c310  unit: CXTPAccessible  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c310
//
// 0083c310  8b442408             mov eax, dword ptr [esp + 8]
// 0083c314  85c0                 test eax, eax
// 0083c316  7512                 jne 0x83c32a
// 0083c318  56                   push esi
// 0083c319  8b742408             mov esi, dword ptr [esp + 8]
// 0083c31d  50                   push eax
// 0083c31e  56                   push esi
// 0083c31f  e81cffffff           call 0x83c240
// 0083c324  8bc6                 mov eax, esi
// 0083c326  5e                   pop esi
// 0083c327  c20800               ret 8
// 0083c32a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0083c32d  56                   push esi
// 0083c32e  8b742408             mov esi, dword ptr [esp + 8]
// 0083c332  50                   push eax
// 0083c333  56                   push esi
// 0083c334  e807ffffff           call 0x83c240
// 0083c339  8bc6                 mov eax, esi
// 0083c33b  5e                   pop esi
// 0083c33c  c20800               ret 8
// copied from an identical function in another client (function ?fn_ROCX000005@ns_ROCX000005@@YGPAXPAXPAUCPropertyGridItemBrickColor@1@@Z)

namespace ns_ROCX000005 {
struct CPropertyGridItemBrickColor
{
    char pad[0x20];
    void* field_20;
};

void __stdcall fn_ROCX000005(void* dst, void* src);

void* __stdcall fn_ROCX000005(void* dst, CPropertyGridItemBrickColor* src)
{
    void* value;
    if (src == 0)
        value = 0;
    else
        value = src->field_20;
    fn_ROCX000005(dst, value);
    return dst;
}
}
