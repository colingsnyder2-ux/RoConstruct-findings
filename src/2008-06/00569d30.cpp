// from server: 100% by king_originala
// roc 2008-06 00569d30  unit: RBX::StandardOut  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00569d30
//
// 00569d30  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00569d34  85c9                 test ecx, ecx
// 00569d36  750a                 jne 0x569d42
// 00569d38  6805400080           push 0x80004005
// 00569d3d  e8be72e9ff           call 0x401000
// 00569d42  8b442404             mov eax, dword ptr [esp + 4]
// 00569d46  8b00                 mov eax, dword ptr [eax]
// 00569d48  51                   push ecx
// 00569d49  50                   push eax
// 00569d4a  ff153c288000         call dword ptr [0x80283c]
// 00569d50  83c408               add esp, 8
// 00569d53  f7d8                 neg eax
// 00569d55  1bc0                 sbb eax, eax
// 00569d57  40                   inc eax
// 00569d58  c3                   ret 

namespace ATL {
    __declspec(noreturn) void __stdcall AtlThrowImpl(long hr);
}

extern "C" int (__cdecl *mbscmp_import)(
    const unsigned char *, const unsigned char *);

int __cdecl compareStrings(
    const unsigned char *const volatile *left,
    const unsigned char *right)
{
    if (!right)
        ATL::AtlThrowImpl((long)0x80004005UL);

    const unsigned char *value = *left;
    return mbscmp_import(value, right) == 0;
}
