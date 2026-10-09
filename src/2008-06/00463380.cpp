// roc 2008-06 00463380  unit: Scintilla::CScintillaView  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00463380
//
// 00463380  56                   push esi
// 00463381  8bf1                 mov esi, ecx
// 00463383  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00463389  57                   push edi
// 0046338a  33ff                 xor edi, edi
// 0046338c  3bc7                 cmp eax, edi
// 0046338e  740f                 je 0x46339f
// 00463390  50                   push eax
// 00463391  e8b4d52300           call 0x6a094a
// 00463396  83c404               add esp, 4
// 00463399  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 0046339f  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 004633a5  89bec0000000         mov dword ptr [esi + 0xc0], edi
// 004633ab  5f                   pop edi
// 004633ac  5e                   pop esi
// 004633ad  c20800               ret 8
// copied from an identical function in another client (function ?method@ScintillaView@ns_ROCX000004@@QAEXHH@Z)

namespace ns_ROCX000004 {
extern "C" void __cdecl fn_ROCX000004(void*);

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
        fn_ROCX000004(field_b8);
        field_b8 = 0;
    }
    field_c0 = 0;
    field_bc = 0;
}
}
