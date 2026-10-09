// roc 2012-06 0049fcd0  unit: Scintilla::CScintillaView  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049fcd0
//
// 0049fcd0  56                   push esi
// 0049fcd1  8bf1                 mov esi, ecx
// 0049fcd3  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0049fcd9  57                   push edi
// 0049fcda  33ff                 xor edi, edi
// 0049fcdc  3bc7                 cmp eax, edi
// 0049fcde  740f                 je 0x49fcef
// 0049fce0  50                   push eax
// 0049fce1  e8d4264e00           call 0x9823ba
// 0049fce6  83c404               add esp, 4
// 0049fce9  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 0049fcef  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 0049fcf5  89bec0000000         mov dword ptr [esi + 0xc0], edi
// 0049fcfb  5f                   pop edi
// 0049fcfc  5e                   pop esi
// 0049fcfd  c20800               ret 8
// copied from an identical function in another client (function ?method@ScintillaView@ns_ROCX00000b@@QAEXHH@Z)

namespace ns_ROCX00000b {
extern "C" void __cdecl fn_ROCX00000b(void*);

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
        fn_ROCX00000b(field_b8);
        field_b8 = 0;
    }
    field_c0 = 0;
    field_bc = 0;
}
}
