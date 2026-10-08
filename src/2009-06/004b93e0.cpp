// roc 2009-06 004b93e0  unit: RBX::Network::Player  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b93e0
//
// 004b93e0  51                   push ecx
// 004b93e1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b93e5  56                   push esi
// 004b93e6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b93ea  50                   push eax
// 004b93eb  56                   push esi
// 004b93ec  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004b93f4  e867f5ffff           call 0x4b8960
// 004b93f9  83c408               add esp, 8
// 004b93fc  8bc6                 mov eax, esi
// 004b93fe  5e                   pop esi
// 004b93ff  59                   pop ecx
// 004b9400  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?createChild@Instance@RBX@@UAE?AV?$shared_ptr@VInstance@RBX@@@boost@@ABVName@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
