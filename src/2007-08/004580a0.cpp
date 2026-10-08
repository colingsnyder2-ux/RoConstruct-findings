// roc 2007-08 004580a0  unit: CRobloxWnd  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004580a0
//
// 004580a0  56                   push esi
// 004580a1  8bf1                 mov esi, ecx
// 004580a3  e878a40e00           call 0x542520
// 004580a8  c7068c327900         mov dword ptr [esi], 0x79328c
// 004580ae  c7460484327900       mov dword ptr [esi + 4], 0x793284
// 004580b5  c746107c327900       mov dword ptr [esi + 0x10], 0x79327c
// 004580bc  c746146c327900       mov dword ptr [esi + 0x14], 0x79326c
// 004580c3  c7462c5c327900       mov dword ptr [esi + 0x2c], 0x79325c
// 004580ca  c746444c327900       mov dword ptr [esi + 0x44], 0x79324c
// 004580d1  c7465c3c327900       mov dword ptr [esi + 0x5c], 0x79323c
// 004580d8  c746742c327900       mov dword ptr [esi + 0x74], 0x79322c
// 004580df  c7868c0000001c327900 mov dword ptr [esi + 0x8c], 0x79321c
// 004580e9  8bc6                 mov eax, esi
// 004580eb  5e                   pop esi
// 004580ec  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
