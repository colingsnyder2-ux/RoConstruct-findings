// roc 2008-06 005e61b0  unit: RBX::Clump  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e61b0
//
// 005e61b0  53                   push ebx
// 005e61b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005e61b5  56                   push esi
// 005e61b6  57                   push edi
// 005e61b7  8bf9                 mov edi, ecx
// 005e61b9  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 005e61bc  e89f130000           call 0x5e7560
// 005e61c1  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 005e61c4  8bf0                 mov esi, eax
// 005e61c6  e895130000           call 0x5e7560
// 005e61cb  3bf7                 cmp esi, edi
// 005e61cd  7402                 je 0x5e61d1
// 005e61cf  8bc6                 mov eax, esi
// 005e61d1  5f                   pop edi
// 005e61d2  5e                   pop esi
// 005e61d3  5b                   pop ebx
// 005e61d4  c20400               ret 4
// library rbxgs/v8world\Assembly.cpp (function ?otherAssembly@Assembly@RBX@@QBEPAV12@PAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
