// roc 2010-06 004706b0  unit: Scintilla::CScintillaView  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004706b0
//
// 004706b0  56                   push esi
// 004706b1  8bf1                 mov esi, ecx
// 004706b3  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 004706b9  57                   push edi
// 004706ba  33ff                 xor edi, edi
// 004706bc  3bc7                 cmp eax, edi
// 004706be  740f                 je 0x4706cf
// 004706c0  50                   push eax
// 004706c1  e880753300           call 0x7a7c46
// 004706c6  83c404               add esp, 4
// 004706c9  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 004706cf  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 004706d5  89bec0000000         mov dword ptr [esi + 0xc0], edi
// 004706db  5f                   pop edi
// 004706dc  5e                   pop esi
// 004706dd  c20800               ret 8
// copied from an identical function in another client (function ?method@ScintillaView@ns_ROCX000033@@QAEXHH@Z)

namespace ns_ROCX000033 {
extern "C" void __cdecl fn_ROCX000033(void*);

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
        fn_ROCX000033(field_b8);
        field_b8 = 0;
    }
    field_c0 = 0;
    field_bc = 0;
}
}
