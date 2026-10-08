// roc 2011-06 004ab3b0  unit: RBX::Network::Player  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ab3b0
//
// 004ab3b0  51                   push ecx
// 004ab3b1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ab3b5  56                   push esi
// 004ab3b6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004ab3ba  50                   push eax
// 004ab3bb  56                   push esi
// 004ab3bc  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004ab3c4  e817f1ffff           call 0x4aa4e0
// 004ab3c9  83c408               add esp, 8
// 004ab3cc  8bc6                 mov eax, esi
// 004ab3ce  5e                   pop esi
// 004ab3cf  59                   pop ecx
// 004ab3d0  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?createChild@Instance@RBX@@UAE?AV?$shared_ptr@VInstance@RBX@@@boost@@ABVName@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
