// roc 2009-06 00464000  unit: Scintilla::CScintillaView  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464000
//
// 00464000  56                   push esi
// 00464001  8bf1                 mov esi, ecx
// 00464003  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00464009  57                   push edi
// 0046400a  33ff                 xor edi, edi
// 0046400c  3bc7                 cmp eax, edi
// 0046400e  740f                 je 0x46401f
// 00464010  50                   push eax
// 00464011  e8c84c2b00           call 0x718cde
// 00464016  83c404               add esp, 4
// 00464019  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 0046401f  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 00464025  89bec0000000         mov dword ptr [esi + 0xc0], edi
// 0046402b  5f                   pop edi
// 0046402c  5e                   pop esi
// 0046402d  c20800               ret 8
// copied from an identical function in another client (function ?method@ScintillaView@ns_ROCX00000a@@QAEXHH@Z)

namespace ns_ROCX00000a {
extern "C" void __cdecl fn_ROCX00000a(void*);

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
        fn_ROCX00000a(field_b8);
        field_b8 = 0;
    }
    field_c0 = 0;
    field_bc = 0;
}
}
