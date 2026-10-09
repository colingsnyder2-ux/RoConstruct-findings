// roc 2009-12 0083c180  unit: CXTPAccessible  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c180
//
// 0083c180  8b442408             mov eax, dword ptr [esp + 8]
// 0083c184  85c0                 test eax, eax
// 0083c186  7512                 jne 0x83c19a
// 0083c188  56                   push esi
// 0083c189  8b742408             mov esi, dword ptr [esp + 8]
// 0083c18d  50                   push eax
// 0083c18e  56                   push esi
// 0083c18f  e8acffffff           call 0x83c140
// 0083c194  8bc6                 mov eax, esi
// 0083c196  5e                   pop esi
// 0083c197  c20800               ret 8
// 0083c19a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0083c19d  56                   push esi
// 0083c19e  8b742408             mov esi, dword ptr [esp + 8]
// 0083c1a2  50                   push eax
// 0083c1a3  56                   push esi
// 0083c1a4  e897ffffff           call 0x83c140
// 0083c1a9  8bc6                 mov eax, esi
// 0083c1ab  5e                   pop esi
// 0083c1ac  c20800               ret 8
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
