// roc 2011-06 0048cfb0  unit: Scintilla::CScintillaView  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048cfb0
//
// 0048cfb0  56                   push esi
// 0048cfb1  8bf1                 mov esi, ecx
// 0048cfb3  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0048cfb9  57                   push edi
// 0048cfba  33ff                 xor edi, edi
// 0048cfbc  3bc7                 cmp eax, edi
// 0048cfbe  740f                 je 0x48cfcf
// 0048cfc0  50                   push eax
// 0048cfc1  e83ed33700           call 0x80a304
// 0048cfc6  83c404               add esp, 4
// 0048cfc9  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 0048cfcf  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 0048cfd5  89bec0000000         mov dword ptr [esi + 0xc0], edi
// 0048cfdb  5f                   pop edi
// 0048cfdc  5e                   pop esi
// 0048cfdd  c20800               ret 8
// copied from an identical function in another client (function ?method@ScintillaView@ns_ROCX000073@@QAEXHH@Z)

namespace ns_ROCX000073 {
extern "C" void __cdecl fn_ROCX000073(void*);

struct ScintillaView {
    char pad[0xb8];
    void* field_b8;
    void* field_bc;
    void* field_c0;
    void method(int, int);
};

void ScintillaView::method(int, int)
{
    if (field_b8 != 0) {
        fn_ROCX000073(field_b8);
        field_b8 = 0;
    }
    field_c0 = 0;
    field_bc = 0;
}
}
