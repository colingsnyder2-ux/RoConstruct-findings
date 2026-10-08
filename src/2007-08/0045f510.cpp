// from server: 100% by colin
// roc 2007-08 0045f510  unit: Scintilla::CScintillaView  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045f510
//
// 0045f510  56                   push esi
// 0045f511  8bf1                 mov esi, ecx
// 0045f513  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0045f519  57                   push edi
// 0045f51a  33ff                 xor edi, edi
// 0045f51c  3bc7                 cmp eax, edi
// 0045f51e  740f                 je 0x45f52f
// 0045f520  50                   push eax
// 0045f521  e8000a1d00           call 0x62ff26
// 0045f526  83c404               add esp, 4
// 0045f529  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 0045f52f  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 0045f535  89bec0000000         mov dword ptr [esi + 0xc0], edi
// 0045f53b  5f                   pop edi
// 0045f53c  5e                   pop esi
// 0045f53d  c20800               ret 8

extern "C" void __cdecl func_0062ff26(void*);

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
        func_0062ff26(field_b8);
        field_b8 = 0;
    }
    field_c0 = 0;
    field_bc = 0;
}
