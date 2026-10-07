// roc 2010-06 00426dd0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00426dd0
//
// 00426dd0  6aff                 push -1
// 00426dd2  684b1d9a00           push 0x9a1d4b
// 00426dd7  64a100000000         mov eax, dword ptr fs:[0]
// 00426ddd  50                   push eax
// 00426dde  64892500000000       mov dword ptr fs:[0], esp
// 00426de5  51                   push ecx
// 00426de6  56                   push esi
// 00426de7  6a20                 push 0x20
// 00426de9  8bf1                 mov esi, ecx
// 00426deb  e8b00b3800           call 0x7a79a0
// 00426df0  83c404               add esp, 4
// 00426df3  89442404             mov dword ptr [esp + 4], eax
// 00426df7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00426dff  85c0                 test eax, eax
// 00426e01  741b                 je 0x426e1e
// 00426e03  83c604               add esi, 4
// 00426e06  56                   push esi
// 00426e07  8bc8                 mov ecx, eax
// 00426e09  e862ffffff           call 0x426d70
// 00426e0e  5e                   pop esi
// 00426e0f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00426e13  64890d00000000       mov dword ptr fs:[0], ecx
// 00426e1a  83c410               add esp, 0x10
// 00426e1d  c3                   ret 
// 00426e1e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00426e22  33c0                 xor eax, eax
// 00426e24  5e                   pop esi
// 00426e25  64890d00000000       mov dword ptr fs:[0], ecx
// 00426e2c  83c410               add esp, 0x10
// 00426e2f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ?clone@?$holder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
