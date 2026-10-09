// roc 2008-06 006e8a90  unit: CPatchedControlComboBox  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8a90
//
// 006e8a90  8b442408             mov eax, dword ptr [esp + 8]
// 006e8a94  85c0                 test eax, eax
// 006e8a96  7512                 jne 0x6e8aaa
// 006e8a98  56                   push esi
// 006e8a99  8b742408             mov esi, dword ptr [esp + 8]
// 006e8a9d  50                   push eax
// 006e8a9e  56                   push esi
// 006e8a9f  e8acffffff           call 0x6e8a50
// 006e8aa4  8bc6                 mov eax, esi
// 006e8aa6  5e                   pop esi
// 006e8aa7  c20800               ret 8
// 006e8aaa  8b4020               mov eax, dword ptr [eax + 0x20]
// 006e8aad  56                   push esi
// 006e8aae  8b742408             mov esi, dword ptr [esp + 8]
// 006e8ab2  50                   push eax
// 006e8ab3  56                   push esi
// 006e8ab4  e897ffffff           call 0x6e8a50
// 006e8ab9  8bc6                 mov eax, esi
// 006e8abb  5e                   pop esi
// 006e8abc  c20800               ret 8
// copied from an identical function in another client (function ?fn_ROCX00001a@ns_ROCX00001a@@YGPAXPAXPAUCPropertyGridItemBrickColor@1@@Z)

namespace ns_ROCX00001a {
struct CPropertyGridItemBrickColor
{
    char pad[0x20];
    void* field_20;
};

void __stdcall fn_ROCX00001a(void* dst, void* src);

void* __stdcall fn_ROCX00001a(void* dst, CPropertyGridItemBrickColor* src)
{
    void* value;
    if (src == 0)
        value = 0;
    else
        value = src->field_20;
    fn_ROCX00001a(dst, value);
    return dst;
}
}
