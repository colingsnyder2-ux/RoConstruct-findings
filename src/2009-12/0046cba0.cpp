// roc 2009-12 0046cba0  unit: Scintilla::CScintillaView  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046cba0
//
// 0046cba0  56                   push esi
// 0046cba1  8bf1                 mov esi, ecx
// 0046cba3  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0046cba9  57                   push edi
// 0046cbaa  33ff                 xor edi, edi
// 0046cbac  3bc7                 cmp eax, edi
// 0046cbae  740f                 je 0x46cbbf
// 0046cbb0  50                   push eax
// 0046cbb1  e8506f3800           call 0x7f3b06
// 0046cbb6  83c404               add esp, 4
// 0046cbb9  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 0046cbbf  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 0046cbc5  89bec0000000         mov dword ptr [esi + 0xc0], edi
// 0046cbcb  5f                   pop edi
// 0046cbcc  5e                   pop esi
// 0046cbcd  c20800               ret 8
// copied from an identical function in another client (function ?method@ScintillaView@ns_ROCX000037@@QAEXHH@Z)

namespace ns_ROCX000037 {
extern "C" void __cdecl fn_ROCX000037(void*);

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
        fn_ROCX000037(field_b8);
        field_b8 = 0;
    }
    field_c0 = 0;
    field_bc = 0;
}
}
